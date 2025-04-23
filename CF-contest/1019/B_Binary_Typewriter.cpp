/*----------------------------------------
    author:  Imam
    created: 21.04.2025 21:08:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    // without reverse
    long long ans=n;
    if(s[0]=='1')ans++;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i])ans++;
    }
    // check duplicate 01 or 10
    bool seen10,seen01,flag;
    flag=seen01=seen10=false;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i]){
            if(s[i-1]=='0'){
                if(seen01){flag=true;break;}
                seen01=true;
            }
            else{
                if(seen10){flag=true;break;}
                seen10=true;
            }
        }
    }
    if(flag){cout<<ans-2<<'\n';return;}
    int cnt=count(s.begin(),s.end(),'1');
    cout<<(cnt?n+1:n)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}