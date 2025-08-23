/*----------------------------------------
    author:  Imam
    created: 10.08.2025 21:16:01
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
map<ll,ll>mp;
inline ll key(ll val, ll k){
    ll a=val%k;
    ll b=(k-a)%k;
    return min(a,b);
}
inline void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    for(auto val:ar)mp[key(val,k)]++;
    for(auto val:br)mp[key(val,k)]--;
    bool flag=true;
    for(auto [x,y]:mp){
        if(y!=0){
            flag=false;
            break;
        }
    }
    cout<<(flag?"YES":"NO")<<'\n';
    mp.clear();
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}