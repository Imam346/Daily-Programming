#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            getchar();//skip the entire
            scanf(" %c",&mat[i][j]);
        }
    }
    int flag=1;//assume initially #Black&White
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='C' || mat[i][j]=='M' || mat[i][j]=='Y')
            {
                flag=0;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) printf("#Black&White\n");
    else printf("#Color\n");
    return 0;
}