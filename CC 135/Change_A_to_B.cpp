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
    int t; cin>>t;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll cnt=0;
        ll x= a;
        while(true)
        {
            if(x==b) break;
            if((x+1)*k<=b)
            {
                x = (x+1)*k;
                cnt+=2;
            }
            else if((x*k)<=b)
            {
                x = x*k;
                cnt++;
            }
            else
            {
                x++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}