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
    int n; scanf("%d",&n);
    int tmp=2; n-=2;
    while(n){
        if(n%3!=0){break;}
        tmp++;
        n--;
    }
    printf("%d %d %d\n",1,(tmp-1),n);
    return 0;
}