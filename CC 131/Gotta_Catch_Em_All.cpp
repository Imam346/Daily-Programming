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
        int n,x,y;
        cin>>n>>x>>y;
        int div = y/x;
        int sum1=0, sum2=0;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>div)
            {
                sum2 += y;
            }
            else sum1 += ar[i];
        }
        int ans = (sum1*x) + sum2;
        cout<<ans<<'\n';
    }
    return 0;
}