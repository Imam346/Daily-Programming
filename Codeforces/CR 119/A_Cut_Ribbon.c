#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){
    return (a>b?a:b);
}
int dp[4][4005];
int Unbounded_knapsack(int n,int s,int w[]){
    //base case
    if(n==0 || s==0) return (s==0?0:-1e9);
    //memoization
    if(dp[n][s]!=-1) return dp[n][s];
    
    if(w[n-1]<=s){
        int op1 = 1+Unbounded_knapsack(n,s-w[n-1],w);
        int op2 = Unbounded_knapsack(n-1,s,w);
        return dp[n][s] = max(op1,op2);
    }
    else{
        return dp[n][s] = Unbounded_knapsack(n-1,s,w);
    }
}

int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);

    int w[3]={a,b,c};

    memset(dp,-1,sizeof(dp));
    int ans = Unbounded_knapsack(3,n,w);
    printf("%d\n",ans);
    return 0;
}