/*----------------------------------------
    author:  Imam
    created: 28.08.2025 22:55:05
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    map<int, vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]].push_back(i);
    }

    vector<tuple<int,int,int>> block;
    for(auto &[x,y]:mp){
        int sz=y.size();
        if(sz<x){continue;}
        for(int i=0;i<=(sz-x);i++){
            block.emplace_back(y[i+x-1],y[i],x);
        }
    }
    sort(block.begin(),block.end());
    int m=block.size();
    vector<int> end(m), start(m), w(m);
    for(int i=0;i<m;i++){
        end[i]=get<0>(block[i]);
        start[i]=get<1>(block[i]);
        w[i]=get<2>(block[i]);
    }

    vector<int> ans(m+1);
    for(int i=1;i<=m;i++){
        int l=start[i-1];
        int r=lower_bound(end.begin(),end.end(),l)-end.begin();
        ans[i]=max(ans[r]+w[i-1], ans[i-1]);
    }
    cout<<ans[m]<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}