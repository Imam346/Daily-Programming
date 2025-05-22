#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
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
        int r;cin>>r;
        int cnt=0;
        int r_sq = r*r;
        int r_plus = (r+1)*(r+1);
        for(int i=-r-1;i<=r+1;i++)
        {
            for(int j=-r-1;j<=r+1;j++)
            {
                int sq = i*i + j*j;
                if(r_sq<=sq && sq<r_plus) cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}