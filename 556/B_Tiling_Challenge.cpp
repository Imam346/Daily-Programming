/*----------------------------------------
    author:  Imam
    created: 28.11.2024 12:41:23
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin>>n;
    char mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }

    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(mat[i][j]=='.' && mat[i-1][j]=='.' && mat[i][j-1]=='.' && mat[i+1][j]=='.' && mat[i][j+1]=='.'){
                mat[i][j]='#';
                mat[i-1][j]='#';
                mat[i][j-1]='#';
                mat[i+1][j]='#';
                mat[i][j+1]='#';
            }
        }
    }

    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='.'){
                flag=false;
                break;
            }
            // cout<<mat[i][j];
        }
        // cout<<endl;
        if(!flag){break;}
    }
    cout<<(flag?"YES\n":"NO\n");
    return 0;
}