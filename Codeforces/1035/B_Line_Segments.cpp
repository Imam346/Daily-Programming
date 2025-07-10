/*----------------------------------------
    author:  Imam
    created: 05.07.2025 21:27:31
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline void solve()
{
    ll n; cin>>n;
    ll px,py,qx,qy;
    cin>>px>>py>>qx>>qy;
    vector<ll> ar(n);
    ll sum=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
        mx=max(mx,ar[i]);
    }

    ll dis = (px-qx)*(px-qx) + (py-qy)*(py-qy);
    ll D_min = max(0LL, 2*mx-sum);
    ll D_min_sq = D_min*D_min;
    ll D_max_sq = sum*sum;

    if (D_min_sq<=dis && dis<=D_max_sq) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}