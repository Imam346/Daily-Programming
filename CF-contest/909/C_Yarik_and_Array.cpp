/*----------------------------------------
    author:  Imam
    created: 11.05.2025 16:03:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    ll best=ar[0],sum=ar[0];
    for(int i=1;i<n;i++){
        if((ar[i-1]&1) && (ar[i]&1) || (ar[i-1]&1)==0 && (ar[i]&1)==0){
            sum=ar[i];
            best=max(best,sum);
            continue;
        }
        sum = max(ar[i],sum+ar[i]);
        best = max(best,sum);
    }
    cout<<best<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}