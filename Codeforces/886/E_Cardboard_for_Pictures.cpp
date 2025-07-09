/*----------------------------------------
    author:  Imam
    created: 09.07.2025 23:35:28
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline bool compute_area(int n, vector<ll>&ar, ll c, ll w){
    ll total=0;
    for(int i=0;i<n;i++){
        ll a = (w*2)+ar[i];
        total+=(a*a);
        if(total>c){return false;}
    }
    return true;
}
inline void solve()
{
    ll n,c; cin>>n>>c;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    ll l=0,r=1e10,ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(compute_area(n,ar,c,mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
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
