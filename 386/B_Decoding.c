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
    int n; scanf("%d",&n);
    char s[n],ans[n+1];
    scanf("%s",s);
    int x=0,y=n-1;
    bool flag=true;
    for(int i=n-1;i>=0;i--){
        if(flag){
            ans[y]=s[i];
            flag=false;
            y--;
        }
        else{
            ans[x]=s[i];
            flag=true;
            x++;
        }
    }
    ans[n]='\0';//null terminate the string
    printf("%s\n",ans);
    return 0;
}