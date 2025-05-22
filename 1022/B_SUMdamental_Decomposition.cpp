/*----------------------------------------
    author:  Imam
    created: 19.05.2025 00:26:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x; cin>>n>>x;
    int bits = __builtin_popcountll(x);
    if(bits>=n){cout<<x<<'\n';return;}
    if(n==1 && x==0){cout<<-1<<'\n';return;}
    int ans = x+(n-bits);
    if((n-bits)&1){
        if(x==0 || x==1) ans+=3;
        else ans++;
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