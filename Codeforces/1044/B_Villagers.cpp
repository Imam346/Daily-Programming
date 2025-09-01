/*----------------------------------------
    author:  Imam
    created: 24.08.2025 20:59:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    sort(ar.begin(),ar.end());
    ll ans=0;
    if(n&1){
        for(int i=0;i<n;i+=2){
            ans+=ar[i];
        }
        cout<<ans<<'\n';
        return;
    }
    for(int i=1;i<n;i+=2){
        ans+=ar[i];
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