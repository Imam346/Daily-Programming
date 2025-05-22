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
        int n; scanf("%d",&n);
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            int x; scanf("%d",&x);
            if((x&1)==0) even+=x;
            else odd+=x; 
        }
        if(even>odd) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}