/*----------------------------------------
    author:  Imam
    created: 31.07.2025 21:55:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int group_size[N];

inline void dsu_initilize(int n){
    for(int i=0;i<n;i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}
inline int dsu_find(int node){
    if(parent[node]==-1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
inline void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
inline bool dsu_union(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(leaderA == leaderB)return false;
    dsu_union_by_size(node1, node2);
    return true;
}

inline void solve()
{
    int n; cin>>n;
    vector<int>ans;
    dsu_initilize(2*n+5);

    for(int i=1;i<=n;i++){
        int a,b; cin>>a>>b;
        if(dsu_union(a,b)){
            ans.push_back(i);
        }
    }

    cout<<(int)ans.size()<<'\n';
    for(auto idx:ans)cout<<idx<<" ";
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