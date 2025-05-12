/*----------------------------------------
    author:  Imam
    created: 05.05.2025 10:43:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n,k; cin>>n>>k;
    vector<ll> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;
    
    ll ans,mx_point,mx_b,mx;
    ans=mx_point=mx_b=0;
    for(int i=0;i<min(n,k);i++){
        mx_b = max(mx_b,br[i]);
        mx_point+=ar[i];
        ans = max(ans,(mx_point+mx_b*(k-i-1)));
    }
    // cout<<ans<<" "<<mx<<endl;
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}