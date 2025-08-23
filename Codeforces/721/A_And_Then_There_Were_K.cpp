/*----------------------------------------
    author:  Imam
    created: 21.08.2025 20:10:28
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    // highest power of 2
    int msb = 1<<(31 - __builtin_clz(n));
    cout<<msb-1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}