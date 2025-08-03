/*----------------------------------------
    author:  Imam
    created: 24.07.2025 23:49:26
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int ans=0;
    for(int i=0;i<n;i++){
        ans=__gcd(ans,abs(ar[i]-ar[n-i-1]));
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}