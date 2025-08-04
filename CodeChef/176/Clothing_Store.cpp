/*----------------------------------------
    author:  Imam
    created: 05.03.2025 20:51:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if(a>x){b += (a-x);}
    if(b>y){c += (b-y);}
    a = min(a,x);
    b = min(b,y);
    c = min(c,z);
    cout<<(a+b+c)<<endl;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}