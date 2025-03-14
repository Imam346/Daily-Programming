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
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);
        ll ans = b;
        for(int i=0;i<n;i++){
            int x; scanf("%d",&x);
            ans += min(a-1,x);
        }
        printf("%lld\n",ans);
    }
    return 0;
}