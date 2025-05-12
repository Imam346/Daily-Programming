/*----------------------------------------
    author:  Imam
    created: 27.04.2025 20:05:18
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    vector<pair<ll,ll>> vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i].first;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    vector<ll> pref(n);
    pref[0]=vec[0].first;
    for(ll i=1;i<n;i++){
        pref[i]=vec[i].first+pref[i-1];
    }
    
    int idx=n-1;
    for(int i=n-1;i>=0;i--){
        vec[i].first=idx;
        if(pref[i]>2*pref[i-1]){
            idx=i-1;
        }
    }
    vector<pair<int,int>> ans;
    for(auto [x,y]:vec){ans.push_back({y,x});}
    sort(ans.begin(),ans.end());
    for(auto [x,y]:ans) cout<<y<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}