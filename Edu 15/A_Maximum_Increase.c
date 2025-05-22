#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int main()
{
    int n; scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    
    int cnt=1;
    int mx = 0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[i-1]) cnt++;
        else
        {
            mx = max(mx,cnt);
            cnt=1;
        }
    }
    mx = max(mx,cnt);
    printf("%d\n",mx);
    return 0;
}