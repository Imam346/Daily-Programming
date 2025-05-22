#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int gcd(int i,int j)
{
    if(j==0) return i;
    return gcd(j,i%j);
}

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=0;
        //count valid pair
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(gcd(i,j)%(i+j)!=1) ans++;
            }
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}