#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long

ll Pow[61];
void pre_compute()
{
    Pow[0]=1;
    for(ll i=1;i<61;i++){
        Pow[i]=Pow[i-1]*2;
    }
}
void solve()
{
    int n; scanf("%d",&n);
    ll zero=0,one=0;
    for(int i=1;i<=n;i++){
        int x; scanf("%d",&x);
        if(x==0)zero++;
        if(x==1)one++;
    }
    ll ans = one*Pow[zero];
    printf("%lld\n",ans);
}
int main()
{
    pre_compute();
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}