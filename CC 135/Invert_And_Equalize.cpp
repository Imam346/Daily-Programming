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
        int n; cin>>n;
        string s; cin>>s;

        bool flag=false;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[0]=='1')
            {
                if(s[i]=='1')
                    flag=true;
                else if(s[i]=='0' && flag)
                {
                    cnt++;
                    flag=false;
                }
            }
            else
            {
                if(s[i]=='0')
                    flag=true;
                else if(s[i]=='1' && flag)
                {
                    cnt++;
                    flag=false;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}