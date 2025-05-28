#include<stdio.h>
#include<math.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    const int x1 = a+(b*c);
    const int x2 = a*(b+c);
    const int x3 = (a+b)*c;
    const int x4 = a*b*c;
    const int x5 = a+b+c;
    
    int ans = max(x1,max(x2,max(x3,max(x4,x5))));
    printf("%d\n",ans);
    return 0;
}