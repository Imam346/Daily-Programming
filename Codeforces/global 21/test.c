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
    int a,b,t;
    scanf("%d %d %d",&a,&b,&t);
    printf("%d\n",(t/a)*b);
    return 0;
}