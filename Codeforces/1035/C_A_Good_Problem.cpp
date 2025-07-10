/*----------------------------------------
    author:  Imam
    created: 05.07.2025 22:26:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline ll PowerOfTwo(ll x){
    if(x==0) return 1;
    return 1LL<<(64-__builtin_clzll(x));
}
inline void solve()
{
    ll n,l,r,k;
    cin>>n>>l>>r>>k;

    if(n&1){cout<<l<<'\n';return;}
    ll y = PowerOfTwo(l);
    if(y>r) cout<<-1<<'\n';
    else cout<<(k<=n-2?l:y)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}