#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        
        ll tmp = 45;
        ll one_nine=n/9;
        ll sum=tmp*one_nine;
        ll rem = n%9;
        for(ll i=1;i<=rem;i++)
            sum +=i;
        cout<<sum<<'\n';
    }
    return 0;
}