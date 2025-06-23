/*----------------------------------------
    author:  Imam
    created: 13.06.2025 16:01:12
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    
    vector<ll> vec;
    ll ans=0;
    for(ll val:ar){
        ans+=__builtin_popcountll(val);
        for(int i=0;i<62;i++){
            if((val&(1LL<<i))==0){
                vec.push_back(1LL<<i);
            }
        }
    }

    sort(vec.begin(),vec.end());
    for(auto val:vec){
        if(k>=val) {ans++;k-=val;}
        else {break;}
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