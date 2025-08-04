/*----------------------------------------
    author:  Imam
    created: 16.04.2025 21:23:09
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k,d; cin>>n>>k>>d;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    if(k>=n){cout<<0<<'\n';return;}
    sort(ar.begin(),ar.end());
    // for(auto val:ar) cout<<val<<" ";
    // cout<<endl;
    int ans=0;
    --d;
    for(int i=0;i<n-k;i++){
        ans+=(d/ar[i])+1;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}