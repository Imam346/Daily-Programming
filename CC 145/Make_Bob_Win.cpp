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

int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        //corner case
        if(n==1)
        {
            if(s[0]=='0') cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }

        int zero=0, one=0;
        if(s[0]=='1')
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1' && flag)
                {
                    one++;
                    flag=false;
                }
                else if(s[i]=='0' && !flag)
                {
                    zero++;
                    flag=true;
                }
            }
        }
        else
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0' && flag)
                {
                    zero++;
                    flag=false;
                }
                else if(s[i]=='1' && !flag)
                {
                    one++;
                    flag=true;
                }
            }
        }
        // cout<<zero<<" "<<one<<endl;
        if(zero>one) cout<<2<<endl; // always zero & one er difference 1. so 1 operation a equel hobe and 2 ta operation korle one>zero hobe. so win hote 2ta operation lagbe
        else if(zero==one) cout<<1<<endl;
        else cout<<0<<endl;//means one > zero
    }
    return 0;
}