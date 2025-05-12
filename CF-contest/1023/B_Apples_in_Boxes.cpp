/*----------------------------------------
    author:  Imam
    created: 05.05.2025 21:57:12
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,k; cin>>n>>k;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    ll mx_cnt = count(ar.begin(),ar.end(),ar[n-1]);
    k++;
    if((ar[n-1]-ar[0])>k) cout<<"Jerry\n";
    else if((ar[n-1]-ar[0])==k && mx_cnt>=2) cout<<"Jerry\n";
    else{
        ll sum = accumulate(ar.begin(),ar.end(),0LL);
        cout<<(sum&1?"Tom":"Jerry")<<'\n';
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