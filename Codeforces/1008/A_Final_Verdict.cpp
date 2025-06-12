/*----------------------------------------
    author:  Imam
    created: 10.03.2025 20:51:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    long long sum = accumulate(ar.begin(),ar.end(),0LL);
    // if(sum==x){cout<<"YES\n";return;}
    // if(n%2){cout<<"NO\n";return;}
    if(sum%n==0 && (sum/n)==x) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}