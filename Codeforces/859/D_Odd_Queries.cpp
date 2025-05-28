/*----------------------------------------
    author:  Imam
    created: 17.03.2025 16:08:18
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    vector<ll> pref(n);
    pref[0]=ar[0];
    for(int i=1;i<n;i++){
        pref[i]=ar[i]+pref[i-1];
    }
    ll sum=accumulate(ar.begin(),ar.end(),0LL);
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--,r--;
        ll x=0;
        if(l==0){x=pref[r];}
        else{x=pref[r]-pref[l-1];}
        ll a = ((r-l)+1)*k;
        ll cur_sum = (sum-x)+a;
        // cout<<cur_sum<<'\n';
        cout<<(cur_sum&1?"YES\n":"NO\n");
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