/*----------------------------------------
    author:  Imam
    created: 15.03.2025 20:35:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m; cin>>n>>m;
    vector<string>mat(n);
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }
    int mx1 = 0;
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<m;j++){
            x^=(mat[i][j]-'0');
        }
        if(x)mx1++;
    }
    int mx2 = 0;
    for(int j=0;j<m;j++){
        int x=0;
        for(int i=0;i<n;i++){
            x^=(mat[i][j]-'0');
        }
        if(x)mx2++;
    }
    cout<<max(mx1,mx2)<<'\n';
}   
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}