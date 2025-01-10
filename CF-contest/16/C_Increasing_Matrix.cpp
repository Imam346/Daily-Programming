/*----------------------------------------
    author:  Imam
    created: 04.01.2025 12:45:17
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }

    //case 1
    //row
    for(int i=1;i<m;i++){
        if(mat[0][i]<=mat[0][i-1]){
            cout<<-1<<'\n';return 0;
        }
    }
    for(int i=1;i<m;i++){
        if(mat[n-1][i]<=mat[n-1][i-1]){
            cout<<-1<<'\n';return 0;
        }
    }
    //column
    for(int i=1;i<n;i++){
        if(mat[i][0]<=mat[i-1][0]){
            cout<<-1<<'\n';return 0;
        }
    }
    for(int i=1;i<n;i++){
        if(mat[i][m-1]<=mat[i-1][m-1]){
            cout<<-1<<'\n';return 0;
        }
    }

    //case 2
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //row
            x=(mat[i][m-1]-mat[i][0])-1;
            if((m-2)>x){cout<<-1<<'\n';return 0;}
            //column
            y=(mat[n-1][j]-mat[0][j])-1;
            if((n-2)>y){cout<<-1<<'\n';return 0;}
        }
    }

    //case 3
    int tmp;
    for(int i=n-2;i>=1;i--){
        for(int j=m-2;j>=1;j--){
            tmp = min(mat[i+1][j],max(mat[i-1][j],mat[i][j+1]));
            if(mat[i][j]==0){mat[i][j]=(tmp-1);}
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            tmp=max(mat[i][j-1],mat[i-1][j]);
            if(tmp>=mat[i][j]){cout<<-1<<'\n';return 0;}
        }
    }

    long long ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans+=mat[i][j];
            // cout<<mat[i][j]<<" ";
            }
        // cout<<endl;
    }
    cout<<ans<<'\n';
    return 0;
}