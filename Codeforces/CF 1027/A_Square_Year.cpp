/*----------------------------------------
    author:  Imam
    created: 26.05.2025 20:40:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    int a = int(sqrt(n));
    if((a*a)==n) cout<<0<<" "<<a<<'\n';
    else cout<<-1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}