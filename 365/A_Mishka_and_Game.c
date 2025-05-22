#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int cnt1=0,cnt2=0;
    while(n--)
    {
        int m,c;
        scanf("%d %d",&m,&c);
        if(m>c) cnt1++;
        else if(c>m) cnt2++;
    }

    if(cnt1>cnt2) printf("Mishka\n");
    else if(cnt2>cnt1) printf("Chris\n");
    else printf("Friendship is magic!^^\n");
    return 0;
}