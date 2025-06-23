/*----------------------------------------
    author:  Imam
    created: 15.06.2025 16:14:41
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll w,h,a,b,x1,y1,x2,y2;
    cin>>w>>h>>a>>b;
    cin>>x1>>y1>>x2>>y2;

    ll x = abs(x2-x1);
    ll y = abs(y2-y1);
    bool horizontal=x%a==0;
    bool vertical=y%b==0;

    bool ans=true;
    if(x<a && !vertical) ans=false;
    else if(y<b && !horizontal) ans=false;
    else if(x>=a && y>=b && !horizontal && !vertical) ans=false;
    cout<<(ans?"Yes":"No")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}