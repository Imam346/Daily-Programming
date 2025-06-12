#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n-1;i++)
        scanf("%d",&ar[i]);
    int a,b;
    scanf("%d %d",&a,&b);

    a--,b--;
    int sum=0;
    for(int i=a;i<b;i++)
        sum += ar[i];
    
    printf("%d\n",sum);
    return 0;
}