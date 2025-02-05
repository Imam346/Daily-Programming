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
    int n; scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    
    bool flag=true;
    int ans=0;
    for(int i=n-2;i>=0;i--){
        if(flag && ar[i]<ar[i+1]){flag=false;}
        if(!flag && ar[i]>ar[i+1]){
            ans = i+1; // 1 based index
            break;
        }
    }
    printf("%d\n",ans);
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}