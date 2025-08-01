/*----------------------------------------
    author:  Imam
    created: 22.07.2025 21:55:03
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
const ll N=210;// 2*3*5*7
vector<ll> good(N+1), pref(N+1);

inline void Precompute(){  
    for(ll i=1;i<=N;i++){
        if(__gcd(i,N)==1) good[i]=1;
        else good[i]=0;
    }
    //prefix sum
    for(ll i=1;i<=N;i++){
        pref[i]=pref[i-1]+good[i];
    }
}
inline ll Count(ll x){
    ll blocks=x/N;
    ll rem = x%N;
    return blocks*pref[N]+pref[rem];
}
inline void solve()
{
    ll l,r; cin>>l>>r;
    // count 1 to l-1
    ll L = Count(l-1);
    // count 1 to r
    ll R = Count(r);
    cout<<R-L<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    Precompute();

    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}