/*----------------------------------------
    author:  Imam
    created: 29.07.2025 16:13:27
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    int n; cin>>n;
    vector<pair<ll,ll>> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i].first;
        ar[i].second=i+1;
    }
    sort(ar.begin(),ar.end());
    // for(auto [x,y]:ar)cout<<x<<" "<<y<<endl;
    
    int ans=0;
    for(int i=0;i<n/2;i++){
        ll a=ar[i].first;
        ll b=ar[i].second;
        for(int j=i+1;j<n;j++){
            ll x=ar[j].first;
            ll y=ar[j].second;
            if((a*x)>2*n){break;}
            if((a*x)==b+y)ans++;
        }
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