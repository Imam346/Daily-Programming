/*----------------------------------------
    author:  Imam
    created: 04.08.2025 12:21:31
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m; cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<min(n,m);i++){
        for(int j=0;j<min(n,m);j++){
            if(i==j) mat[i][j]=3;
            else mat[i][j]=2;
        }
    }
    if(m>n){
        for(int i=0;i<n;i++){
            for(int j=n;j<m;j++){
                if(i==0)mat[i][j]=3;
                else mat[i][j]=2;
            }
        }
    }
    else if(n>m){
        for(int i=m;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0)mat[i][j]=3;
                else mat[i][j]=2;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
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