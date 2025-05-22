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
    char s[10];
    scanf("%s",&s);
    // printf("%s\n",s);
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            x=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            y=i+1;
            break;
        }
    }
    printf("%d\n",(y-x));
}
int main()
{
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}