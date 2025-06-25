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
    int n,q; scanf("%d %d",&n,&q);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);

    ll pref_mx[n],pref_s[n];
    pref_mx[0]=pref_s[0]=ar[0];
    int mx=ar[0];
    for(int i=1;i<n;i++){
        mx=max(mx,ar[i]);
        pref_mx[i]=mx;
        pref_s[i]=pref_s[i-1]+ar[i];
    }

    while(q--){
        int k; scanf("%d",&k);
        // binary search to find the last occurrence 
        int l=0,r=n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(pref_mx[mid]<=k){
                l=mid+1;
            }
            else r=mid-1;
        }
        if(r==-1){printf("0 ");continue;}
        printf("%lld ",pref_s[r]);
    }
    printf("\n");
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}