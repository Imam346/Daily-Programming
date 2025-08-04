/*----------------------------------------
    author:  Imam
    created: 01.08.2025 22:16:15
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
//pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll=long long;

inline void solve()
{   
    int n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    pbds<ll> pb;
    vector<ll> reverseInv(n);
    for(int i=0;i<n;i++){
        reverseInv[i]=pb.order_of_key(ar[i]);
        pb.insert(ar[i]);
    }
    pb.clear();
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        ll big = pb.size()-pb.order_of_key(ar[i]+1);
        ans += (reverseInv[i]*big);
        pb.insert(ar[i]);
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
// https://www.hackerrank.com/contests/ycpc-beginners-round-2k25/challenges