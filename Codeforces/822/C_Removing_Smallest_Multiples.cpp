/*----------------------------------------
    author:  Imam
    created: 25.06.2025 15:11:41
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    vector<bool> flag(n+1,false);
    long long ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(s[j-1]=='1'){break;}
            if(!flag[j]){
                ans+=i;
                flag[j]=true;
            }
        }
    }

    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}