/*----------------------------------------
    author:  Imam
    created: 26.08.2025 21:29:32
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll> ar(n);
    for(int i=0;i<n;i++){
        ll val; cin>>val;
        ll rem=val%(k+1);
        ar[i]=val+k*rem;
    }
    for(auto val:ar) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}