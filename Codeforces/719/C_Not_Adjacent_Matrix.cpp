/*----------------------------------------
    author:  Imam
    created: 20.02.2025 21:33:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    if(n==2){cout<<-1<<'\n';return;}
    int mat[n][n];
    int odd=1, even=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(odd<=(n*n)){
                mat[i][j]=odd;
                odd+=2;
            }
            else{
                mat[i][j]=even;
                even+=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}