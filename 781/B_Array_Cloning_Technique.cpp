/*----------------------------------------
    author:  Imam
    created: 07.05.2025 20:04:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }
    int mx_occ=0;
    for(auto [x,y]:mp){mx_occ=max(mx_occ,y);}
    int ans=n-mx_occ;
    while(mx_occ<n){
        ans++;
        mx_occ*=2;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}