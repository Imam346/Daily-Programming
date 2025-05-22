#include<bits/stdc++.h>
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
        int x; cin>>x;
        int result = INT_MIN;
        int yy=0;
        int y=x-1;
        while(y>=1)
        {
            int gcd = __gcd(x,y)+y;
            if(gcd>result)
            {
                yy = y;
                result = gcd;
            }
            y--;
        }
        cout<<yy<<'\n';
    }
    return 0;
}