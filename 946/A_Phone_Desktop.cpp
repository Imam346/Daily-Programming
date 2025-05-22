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
        int x,y;
        cin>>x>>y;

        int cnt=0;
        while(x>0 or y>0)
        {
            if(y>=2)
            {
                y -= 2;
                x -= 7;
                cnt++;
            }
            else if(y==1)
            {
                y -= 1;
                x -= 11;
                cnt++;
            }
            else
            {
                x -= 15;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}