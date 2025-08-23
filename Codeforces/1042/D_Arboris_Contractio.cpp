/*----------------------------------------
    author:  Imam
    created: 10.08.2025 22:35:06
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> adj[n+1];
    vector<int> cnt(n+1);
    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cnt[u]++;
        cnt[v]++;
    }
    //corner case
    if(n==2){cout<<"0\n";return;}

    int leaf=0;
    for(int i=1;i<=n;i++){
        if(cnt[i]==1)leaf++;
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        int tmp=0;
        for(auto x:adj[i]){
            // cout<<cnt[x]<<" ";
            if(cnt[x]==1)tmp++;
        }
        // cout<<i<<" "<<tmp<<endl;
        mx = max(mx,tmp);
    }
    cout<<leaf-mx<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}