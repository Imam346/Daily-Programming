/*----------------------------------------
    author:  Imam
    created: 28.08.2025 20:54:18
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline bool arrange(int x, int y){
    return x<=2*(y+1) && y<=2*(x+1);
}
inline void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool first = arrange(a,b);
    bool second = arrange(c-a, d-b);
    cout<<((first && second)?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}