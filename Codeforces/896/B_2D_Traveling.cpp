/*----------------------------------------
    author:  Imam
    created: 06.07.2025 22:01:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> ar(n);
    pair<ll,ll>start,end;
    for(ll i=1;i<=n;i++){
        cin>>ar[i-1].first>>ar[i-1].second;
        if(i==a){
            start.first=ar[i-1].first;
            start.second=ar[i-1].second;
        }
        if(i==b){
            end.first=ar[i-1].first;
            end.second=ar[i-1].second;
        }
    }

    ll mn1 = LLONG_MAX;
    ll mn2 = LLONG_MAX;
    for(ll i=0;i<k;i++){
        ll a = abs(start.first-ar[i].first)+abs(start.second-ar[i].second);
        ll b = abs(end.first-ar[i].first)+abs(end.second-ar[i].second);
        mn1=min(mn1,a);
        mn2=min(mn2,b);
    }
    ll ans = abs(end.first-start.first)+abs(end.second-start.second);
    if(mn1==LLONG_MAX && mn2==LLONG_MAX) cout<<ans<<'\n';
    else cout<<min(ans,mn1+mn2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll t=1; cin>>t;
    while(t--) solve();
    return 0;
}
