#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long
void solve()
{
    ll n; scanf("%lld",&n);
    // If n is NOT a power of two, it has an odd divisor > 1
    bool PO2 = ((n&(n-1))!=0);
    printf("%s\n",PO2?"YES":"NO");
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}