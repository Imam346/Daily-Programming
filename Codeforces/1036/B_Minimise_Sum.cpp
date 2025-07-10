/*----------------------------------------
    author:  Imam
    created: 06.07.2025 22:01:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int mn1=ar[0]+ar[1];
    int mn2 = ar[0]+min(ar[0],ar[1]);
    cout<<min(mn1,mn2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll t=1; cin>>t;
    while(t--) solve();
    return 0;
}