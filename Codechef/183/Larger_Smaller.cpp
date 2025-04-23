/*----------------------------------------
    author:  Imam
    created: 23.04.2025 20:43:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mn=min(mn,ar[i]);
        mx=max(mx,ar[i]);
    }
    cout<<(mn==mx?0:mx-mn-1)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}