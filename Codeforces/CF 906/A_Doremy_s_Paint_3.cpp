/*----------------------------------------
    author:  Imam
    created: 24.05.2025 22:08:28
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    set<int> s(ar.begin(),ar.end());
    if(s.size()>2)cout<<"No\n";
    else{
        int cnt=count(ar.begin(),ar.end(),ar[0]);
        int rem=n-cnt;
        if(abs(rem-cnt)<=1 || cnt==n)cout<<"Yes\n";
        else cout<<"No\n";
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