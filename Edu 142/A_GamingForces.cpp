#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int ar[n];
        int one=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            if(ar[i]==1)one++;
        } 
        int ans=(one+1)/2 + n-one;
        printf("%d\n",ans);
    }
    return 0;
}