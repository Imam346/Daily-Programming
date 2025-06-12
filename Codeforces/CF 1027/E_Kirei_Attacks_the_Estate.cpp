/*----------------------------------------
    author:  Imam
    created: 27.05.2025 16:55:21
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2*1e5+10;
vector<vector<int>> adj(N);

inline void dfs(int parNode, int curNode, vector<ll>&ar, vector<ll>&mxProfitVal, vector<ll>&mnLossVal)
{
    if(parNode==-1){//for root node
        mxProfitVal[curNode]=ar[curNode];
        mnLossVal[curNode] = 0;
    }
    else{
        mxProfitVal[curNode] = max(ar[curNode],ar[curNode]-mnLossVal[parNode]);
        mnLossVal[curNode] = min(ar[curNode],ar[curNode]-mxProfitVal[parNode]);
    }
    for(auto child:adj[curNode]){
        if(child!=parNode){
            dfs(curNode,child,ar,mxProfitVal,mnLossVal);
        }
    }
}
inline void solve()
{
    int n; cin>>n;

    //clear adjacency list
    for(int i=0;i<=n;i++){adj[i].clear();}
    
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> mxProfitVal(n,0);
    vector<ll> mnLossVal(n,0);
    dfs(-1,0,ar,mxProfitVal,mnLossVal);

    for(auto val:mxProfitVal) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}