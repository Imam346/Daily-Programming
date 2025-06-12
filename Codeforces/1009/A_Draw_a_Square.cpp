/*----------------------------------------
    author:  Imam
    created: 11.03.2025 20:39:01
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}