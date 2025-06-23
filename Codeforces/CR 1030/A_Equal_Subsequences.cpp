/*----------------------------------------
    author:  Imam
    created: 12.06.2025 20:52:57
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    for(int i=1;i<=k;i++) cout<<1;
    for(int i=1;i<=n-k;i++) cout<<0;
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}