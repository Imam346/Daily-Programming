/*----------------------------------------
    author:  Imam
    created: 18.03.2025 00:39:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long
inline void solve()
{
    ll n,p; cin>>n>>p;
    vector<ll> ar(n),br(n);
    for(ll &i:ar) cin>>i;
    for(ll &i:br) cin>>i;

    vector<pair<ll,ll>> vec;
    for(ll i=0;i<n;i++){
        vec.push_back({br[i],ar[i]});
    }
    sort(vec.begin(),vec.end());

    // for(auto &[x,y]:vec) cout<<x<<" ";
    // cout<<endl;
    // for(auto &[x,y]:vec) cout<<y<<" ";
    // 3+2+2+3+3+3=
    // 1->3, 3->3

    ll  ans=0;
    ans+=p;
    pair<ll, ll> x={vec[0].first,vec[0].second};
    ll j=1;
    for(ll i=1;i<n;i++){
        if(x.first>=p){
            ans+=((n-i)*p);
            break;
        }
        ans+=x.first;
        x.second--;
        if(x.second==0){
            x.first=vec[j].first;
            x.second=vec[j].second;
            j++;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL );
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}