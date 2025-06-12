/*----------------------------------------
    author:  Imam
    created: 11.06.2025 23:26:20
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    unordered_set<int> s;
    for(int i=1,x;i<=n;i++){
      cin>>x;
      s.insert(x);
    }
    if(s.find(k)!=s.end()) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}