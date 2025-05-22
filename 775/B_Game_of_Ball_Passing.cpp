/*----------------------------------------
    author:  Imam
    created: 04.02.2025 23:53:41
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int>ar(n);
    for(auto &i:ar) cin>>i;
    int64_t sum = accumulate(ar.begin(),ar.end(),0LL);
    if(sum==0){cout<<0<<'\n';}
    else{
        sort(ar.begin(),ar.end());
        sum -= ar[n-1];
        cout<<1+(max(0LL,ar[n-1]-(sum+1)))<<'\n';
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