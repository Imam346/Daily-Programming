#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,m;
    cin>>n>>m;
    char mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }
    bool flag=true;//assume initially #Black&White
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='C' || mat[i][j]=='M' || mat[i][j]=='Y')
            {
                flag=false;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) cout<<"#Black&White\n";
    else cout<<"#Color\n";
    return 0;
}