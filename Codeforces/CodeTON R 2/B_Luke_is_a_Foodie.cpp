/*----------------------------------------
    author:  Imam
    created: 14.06.2025 23:37:37
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x; cin>>n>>x;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    vector<pair<int,int>> segment(n);
    for(int i=0;i<n;i++){
        segment[i]={ar[i]-x,ar[i]+x};
    }

    int ans=0;
    int l=segment[0].first,r=segment[0].second;
    for(int i=1;i<n;i++){
        l = max(l,segment[i].first);
        r = min(r,segment[i].second);
        if(l>r){
            ans++;
            l=segment[i].first;
            r=segment[i].second;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}