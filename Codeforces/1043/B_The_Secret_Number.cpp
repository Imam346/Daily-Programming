/*----------------------------------------
    author:  Imam
    created: 22.08.2025 16:08:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n; cin>>n;
    set<ll> st;
    ll cur=10;
    while(cur+1<=n){
        if(n%(cur+1)==0) st.insert(n/(cur+1));
        cur*=10;
    }

    if(st.empty()){cout<<0<<'\n';return;}
    cout<<st.size()<<'\n';
    for(auto x:st) cout<<x<<" ";
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