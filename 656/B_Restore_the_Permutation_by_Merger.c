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
        int ar[(2*n)+1];
        for(int i=1;i<=(2*n);i++){
          scanf("%d",&ar[i]);
        }
          
        // for(int i=0;i<(2*n);i++) 
        //   printf("%d ",ar[i]);
        
        int freq[n+1];
        for(int i=0;i<=n;i++) freq[i]=0;
        int p[n+1];
        int idx=1;
        for(int i=1;i<=(2*n);i++){
            if(freq[ar[i]]==0){
                p[idx]=ar[i];
                freq[ar[i]]=1;
                idx++;
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",p[i]);
        printf("\n");
    }
    return 0;
}