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
    int n,x;
    scanf("%d %d",&n,&x);
    int ar[n+1];
    ar[0]=0;
    for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,ar[i+1]-ar[i]);
    }
    mx = max(mx,(x-ar[n])*2);
    printf("%d\n",mx);
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}