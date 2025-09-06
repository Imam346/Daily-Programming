/*----------------------------------------
    author:  Imam
    created: 04.09.2025 16:49:35
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    int n; cin>>n;
    vector<pair<ll,ll>> ar;
    for(int i=1;i<=n;i++){
        ll x; cin>>x;
        ar.push_back({x,i});
    }

    sort(ar.rbegin(),ar.rend());
    ll total=0, dist=1;
    bool flag=true;
    vector<int> ans(n+1,0);
    for(auto &[x,y]:ar){
        ll cur = flag?dist:-dist;
        ans[y]=cur;
        total+=(2*x*llabs(cur));
        if(!flag)dist++;
        flag=!flag;
    }

    cout<<total<<'\n';
    for(auto val:ans) cout<<val<<" ";
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