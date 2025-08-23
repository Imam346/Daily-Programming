/*----------------------------------------
    author:  Imam
    created: 21.08.2025 21:37:26
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n; cin>>n;
    ll pow3=1;// 3^x
    ll ans=0, x=0;
    while(n){
        ll d=n%3;
        // cout<<x<<" "<<d<<endl;
        ll khoroc=3*pow3+x*(pow3/3);
        // cout<<khoroc<<endl;
        ans+=(d*khoroc);
        n/=3;
        pow3*=3;
        x++;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}