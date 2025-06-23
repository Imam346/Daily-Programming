/*----------------------------------------
    author:  Imam
    created: 15.06.2025 15:27:30
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll cal(ll k,ll a,ll b,ll x,ll y){
    ll ans=0;
    if(k>=a){
        ans=(k-a)/x+1;
        k-=(ans*x);
    }
    if(k>=b){ans+=(k-b)/y+1;}
    return ans;
}
inline void solve()
{
    ll k,a,b,x,y; 
    cin>>k>>a>>b>>x>>y;
    ll ans1 = cal(k,a,b,x,y);
    ll ans2 = cal(k,b,a,y,x);
    cout<<max(ans1,ans2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}