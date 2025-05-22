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
    while(t--)
    {
        int n; scanf("%d",&n);
        ll ans=0;
        while(true)
        {
            ll tmp=(n/10);
            ll x = tmp*10;
            ans += x;
            n -= x;
            n += tmp;//add cashback
            if(n<10){ans+=n;break;}
        }
        printf("%lld\n",ans);
    }
    return 0;
}