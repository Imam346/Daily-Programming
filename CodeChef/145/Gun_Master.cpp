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
        int n,d;
        cin>>n>>d;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        int cnt=0;
        if(ar[0]<=d)
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(ar[i]<=d && !flag)
                {
                    cnt++;
                    flag=true;
                }
                if(ar[i]>d && flag)
                {
                    cnt++;
                    flag = false;
                }
            }
        }
        else
        {   
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(ar[i]>d && flag)
                {
                    cnt++;
                    flag = false;
                }
                if(ar[i]<=d && !flag)
                {
                    cnt++;
                    flag=true;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}