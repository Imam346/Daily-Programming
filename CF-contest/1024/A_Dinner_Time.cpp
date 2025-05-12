/*----------------------------------------
    author:  Imam
    created: 11.05.2025 21:31:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    if(n%p){cout<<"YES\n"; return;}
    cout<<((n/p)*q==m?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}