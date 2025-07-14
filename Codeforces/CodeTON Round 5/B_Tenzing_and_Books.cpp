/*----------------------------------------
    author:  Imam
    created: 13.07.2025 23:23:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline bool canReachTarget(vector<ll>& ar, ll &ans, ll &x){
    for(auto cur:ar){
        if((cur&x)==cur)ans|=cur;
        else {return false;}
        if(ans==x){return true;}
    }
    return (ans==x);
}
inline void solve()
{
    ll n,x; cin>>n>>x;
    vector<ll> a1(n),a2(n),a3(n);
    for(auto &i:a1) cin>>i;
    for(auto &i:a2) cin>>i;
    for(auto &i:a3) cin>>i;
    
    if(x==0){cout<<"Yes\n";return;}

    ll ans=0;
    if(canReachTarget(a1,ans,x)){cout<<"Yes\n";return;}
    if(canReachTarget(a2,ans,x)){cout<<"Yes\n";return;}
    if(canReachTarget(a3,ans,x)){cout<<"Yes\n";return;}
    cout<<"No\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}