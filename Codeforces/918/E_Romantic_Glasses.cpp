/*----------------------------------------
    author:  Imam
    created: 09.07.2025 17:17:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int64_t> ar(n);
    for(auto &i:ar) cin>>i;
    map<int64_t,int64_t> mp;
    int64_t sum=0;
    mp[sum]++;
    for(int i=0;i<n;i++){
        if(i%2)ar[i]*=-1;
        sum+=ar[i];
        if(mp[sum]){cout<<"YES\n";return;}
        mp[sum]++;
    }
    cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}