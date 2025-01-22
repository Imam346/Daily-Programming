#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    bool ar[m+1];
    memset(ar,true,sizeof(ar));
    for(int i=1;i<=n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        for(int j=x;j<=y;j++) {ar[j]=false;}
    }

    int cnt=0;
    for(int i=1;i<=m;i++){if(ar[i])cnt++;}
    printf("%d\n",cnt);
    for(int i=1;i<=m;i++){
        if(ar[i]){
            printf("%d ",i);
        }
    }
    return 0;
}