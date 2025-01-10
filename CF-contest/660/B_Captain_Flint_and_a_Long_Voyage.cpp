/*----------------------------------------
    author:  Imam
    created: 06.01.2025 17:04:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll power(ll a,ll b){
    ll result = 1;
    while(b){
        if(b&1){result = (result*a)%mod;}
        a=(a*a)%mod;
        b>>=1;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k = n%4?(n/4)+1:(n/4);
        for(int i=1;i<=n-k;i++) cout<<'9';
        for(int i=1;i<=k;i++) cout<<'8';
        cout<<'\n';
    }
    return 0;
}
/*
emon ekta x print korte hobe jekhane r maximum hoy
*/