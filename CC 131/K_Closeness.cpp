#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> ar(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            ar[i]=ar[i]%k;
        }
        sort(ar.begin(),ar.end());
        ll ans = ar[n-1]-ar[0];
        for(ll i=0;i<n-1;i++)
        {
            ans = min(ans,ar[i]+k - ar[i+1]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}