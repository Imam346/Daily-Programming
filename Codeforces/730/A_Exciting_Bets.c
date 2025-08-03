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
    ll a,b; 
    scanf("%lld %lld",&a,&b);
    if(a==b){printf("0 0\n");return;}
    ll dif=abs(a-b);
    ll rem = a%dif;
    ll cnt = min(rem, dif-rem);
    printf("%lld %lld\n", dif,cnt);
    // 8 5
    // dif=3
    // 8%3=2
    // 5%3=2
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}