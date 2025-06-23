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
    int n,s; scanf("%d %d",&n,&s);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    int ans = ar[n-1]-ar[0] + min(abs(s-ar[0]),abs(s-ar[n-1]));
    printf("%d\n",ans);
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}