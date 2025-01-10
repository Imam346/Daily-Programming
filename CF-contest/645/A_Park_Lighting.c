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
    int t; scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int ans = (n*m)%2?((n*m)/2)+1:(n*m)/2;
        printf("%d\n",ans);
    }
    return 0;
}