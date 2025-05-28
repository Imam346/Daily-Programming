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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll>> vp(n);
        ll mx=0;
        
        for (ll i = 0; i < n; i++)
        {
            cin >> vp[i].first >> vp[i].second;
            mx+=vp[i].second;
        }
        ll dp[n+1][mx+1];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=mx;j++)
            {
                dp[i][j]=LLONG_MIN;
            }
        }

        dp[1][0]=x;
        if(vp[0].first==0)
        {
            dp[1][vp[0].second]=x;
        }
        for(ll i=2;i<=n;i++)
        {
            for(ll j=0;j<=mx;j++)
            {
                dp[i][j]=dp[i-1][j]+x;
                if(j>=vp[i-1].second)
                {
                    ll prev_hap=j-vp[i-1].second;
                    ll prev_left=dp[i-1][prev_hap];
                    if(prev_left>=vp[i-1].first)
                    {
                        dp[i][j]=max(dp[i][j],prev_left-vp[i-1].first+x);
                    }
                }

            }
        }
        ll ans=0;
        for(ll i=mx;i>=0;i--)
        {
            if(dp[n][i]>=0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}