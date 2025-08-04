/*----------------------------------------
    author:  Imam
    created: 04.08.2025 12:03:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m; cin>>n>>m;
    int mat[n][m];
    int cur=2;
    for(int j=0;j<m;j++){
        mat[0][j]=cur;
        cur++;
    }
    for(int j=0;j<m;j++){
        cur=mat[0][j]+1;
        for(int i=1;i<n;i++){
            mat[i][j]=cur++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}