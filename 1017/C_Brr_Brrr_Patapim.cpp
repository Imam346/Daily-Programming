/*----------------------------------------
    author:  Imam
    created: 16.04.2025 23:52:15
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<vector<int>> grid(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>grid[i][j];
        }
    }
    unordered_set<int> s;
    for(int i=1;i<=2*n;i++) s.insert(i);
    vector<int> ans(2*n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans[i+j]=grid[i][j];
            if(s.count(grid[i][j])){
                s.erase(grid[i][j]);
            }
        }
    }
    ans[1]=*s.begin();
    for(int i=1;i<=2*n;i++) cout<<ans[i]<<" ";
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