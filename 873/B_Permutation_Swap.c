#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
#define ll long long

int gcd(int a, int b){
    if (b == 0)return a;
    return gcd(b, a % b);
}
void solve()
{
    int n; scanf("%d",&n);
    int ar[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&ar[i]);
    int k=0;
    for(int i=1;i<=n;i++){
        k = gcd(k,abs(ar[i]-i));
    }
    printf("%d\n",k);
}
int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)solve();
    return 0;
}