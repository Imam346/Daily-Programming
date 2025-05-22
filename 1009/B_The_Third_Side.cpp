/*----------------------------------------
    author:  Imam
    created: 11.03.2025 20:39:01
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    if(n==1){cout<<ar[0]<<'\n';return;}
    long long sum = accumulate(ar.begin(),ar.end(),0LL);
    cout<<sum-(n-1)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}