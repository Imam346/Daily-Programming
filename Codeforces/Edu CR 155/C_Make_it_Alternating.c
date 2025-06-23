#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define mod 998244353
const int N=2*1e5+2;
ll fact(ll n){
    ll f=1;
    for(int i=1;i<=n;i++){
        f=(f*i)%mod;
    }
    return f;
}
void solve()
{
    char s[N];
    gets(s);
    int n=strlen(s);
    
    ll min_op=0;
    ll diff=1;
    for(int i=0;i<n;i++){
        char c=s[i];
        ll cnt=0;
        while(i<n && s[i]==c){cnt++; i++;}
        if(cnt>1){
            min_op+=(cnt-1);
            diff=(diff*cnt)%mod;
        }
        i--;
    }

    ll num_way=(diff*fact(min_op))%mod;
    printf("%lld %lld\n",min_op,num_way);
}
int main()
{
    int t; scanf("%d",&t);
    getchar();
    while(t--) solve();
    return 0;
}