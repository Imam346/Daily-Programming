/*----------------------------------------
    author:  Imam
    created: 24.08.2025 20:44:01
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    bool flag=false;
    for(int x,i=1;i<=n;i++){
        cin>>x;
        if(mp[x])flag=true;
        mp[x]++;
    }
    cout<<(flag?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}