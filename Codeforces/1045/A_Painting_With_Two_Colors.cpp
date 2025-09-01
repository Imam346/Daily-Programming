/*----------------------------------------
    author:  Imam
    created: 26.08.2025 20:48:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n,a,b; 
    cin>>n>>a>>b;
    if((n&1)==(b&1) && (b&1)==(a&1)) cout<<"YES\n";
    else if((n&1)==(b&1) && a<=b) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}