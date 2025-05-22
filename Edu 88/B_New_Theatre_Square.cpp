/*----------------------------------------
    author:  Imam
    created: 08.01.2025 18:46:43
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>mat[i][j];
        }

        int ans=0;
        if((2*x)<=y){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(mat[i][j]=='.'){
                        ans+=x;
                    }
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(j<m-1 && mat[i][j]=='.' && mat[i][j+1]=='.'){
                        ans+=y;
                        j++;
                    }
                    else if(mat[i][j]=='.'){
                        ans+=x;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}