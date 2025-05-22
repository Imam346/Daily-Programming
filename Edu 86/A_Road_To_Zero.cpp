/*----------------------------------------
    author:  Imam
    created: 05.12.2024 18:03:23
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll mn = min(x,y);
        ll mx = max(x,y);
        ll ans=0;
        if((2*a)>b){
            ans += (b*mn);
            ll rem = mx-mn;
            ans += (rem*a);
        }
        else {ans += ((mx+mn)*a);}
        cout<<ans<<'\n';
    }
    return 0;
}