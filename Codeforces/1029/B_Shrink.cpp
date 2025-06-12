/*----------------------------------------
    author:  Imam
    created: 08.06.2025 20:57:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n+1);
    for(int i=2;i<n;i++) ar[i]=i+1;
    ar[1]=1, ar[n]=2;
    for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
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