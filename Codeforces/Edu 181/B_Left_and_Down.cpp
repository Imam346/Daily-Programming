/*----------------------------------------
    author:  Imam
    created: 22.07.2025 21:10:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int64_t a,b,k;
    cin>>a>>b>>k;
    int64_t GCD = __gcd(a,b);
    int64_t dx = a/GCD, dy=b/GCD;
    int64_t mx = max(dx,dy);
    cout<<(mx<=k?1:2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}