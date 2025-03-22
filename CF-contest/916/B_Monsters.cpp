/*----------------------------------------
    author:  Imam
    created: 20.03.2025 16:34:31
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
class cmp{
    public:
    bool operator()(pair<int,int>&a, pair<int,int>& b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    }
};
inline void solve()
{
    int n,k;
    cin>>n>>k;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        pq.push({x,i});
    }
    vector<int> ans;
    while(!pq.empty()){
        auto [x,y] = pq.top();
        pq.pop();
        x-=k;
        if(x<=0){ans.push_back(y);}
        else{pq.push({x,y});}
    }
    for(auto val:ans) cout<<val<<" ";
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