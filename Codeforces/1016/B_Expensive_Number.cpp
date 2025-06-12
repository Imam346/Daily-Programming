#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    string s; cin>>s;
    int n=s.size();
    int ans=0,last;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0') ans++;
        else{last=i;break;}
    }
    for(int i=0;i<last;i++){
        if(s[i]!='0') ans++;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}