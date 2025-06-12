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
        int n; scanf("%d",&n);
        printf("%d\n",2*n);
    }
    return 0;
}