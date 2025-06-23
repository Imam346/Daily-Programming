/*----------------------------------------
    author:  Imam
    created: 21.06.2025 21:10:12
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    if(a==e && a==(b+d+f)){cout<<"YES\n";return;}
    if(a==(c+e) && d==f && a==(b+d)){cout<<"YES\n";return;}
    if(b==f && b==(a+c+e)){cout<<"YES\n";return;}
    if(b==(d+f) && c==e && b==(a+c)){cout<<"YES\n";return;}
    cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}