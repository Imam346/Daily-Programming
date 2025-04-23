/*----------------------------------------
    author:  Imam
    created: 21.04.2025 00:26:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    ll k=1;
    while(true){
        set<ll> s;
        for(ll i=0;i<n;i++){
            s.insert(ar[i]%k);
        }
        if(s.size()==2){
           cout<<k<<'\n';
           return;
        }
        k=1LL*1<<k;
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}