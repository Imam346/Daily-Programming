/*----------------------------------------
    author:  Imam
    created: 21.03.2025 16:08:11
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a, pair<int,int>& b){
    if(a.first!=b.first)
        return a.first>b.first;
    return a.second<b.second;
}
inline void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> vec;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x%k==0){vec.push_back({k,i});}
        else {vec.push_back({x%k,i});}
    }
    sort(vec.begin(),vec.end(),cmp);
    for(auto [x,y]:vec) cout<<y<<" ";
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