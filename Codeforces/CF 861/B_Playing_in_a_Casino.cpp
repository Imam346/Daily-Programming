/*----------------------------------------
    author:  Imam
    created: 23.05.2025 20:20:38
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }

    ll ans=0;
    for(int j=0;j<m;j++){
        vector<int> col;
        for(int i=0;i<n;i++){
            col.push_back(mat[i][j]);
        }
        sort(col.begin(),col.end());

        ll pref=0;
        for(int i=0;i<n;i++){
            ans+=(i*(1LL*col[i]) - pref);
            pref+=col[i];
        }
    }

    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}