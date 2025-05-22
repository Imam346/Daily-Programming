#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod=1e9+7;

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
        ll n; cin>>n;
        vector<ll> ar(n);
        for(auto &i:ar) cin>>i;
        sort(ar.begin(),ar.end());
        ll s = ar[0];
        for(ll i=1;i<n;i++)
        {
            if(s*ar[i]>=s+ar[i])
                s *= ar[i];
            else s += ar[i];
            s%=mod;
        }
        
        cout<<s<<endl;
    }
    return 0;
}