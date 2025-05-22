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
    ll t; cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> ar(n);
        for(ll &i:ar) cin>>i;
        
        multiset<ll> hi,lo;
        ll sum_hi = 0, sum_lo = 0;
        vector<ll>final;
        for (ll i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                if (ar[i] > *hi.begin())
                {
                    sum_hi += ar[i] - *hi.begin();
                    sum_lo += *hi.begin();
                    lo.insert(*hi.begin());
                    hi.insert(ar[i]);
                    hi.erase(hi.begin());
                } else
                {
                    lo.insert(ar[i]);
                    sum_lo += ar[i];
                }
            }
            else
            {
                if (lo.empty())
                {
                    hi.insert(ar[i]);
                    sum_hi += ar[i];
                } else if (ar[i] < *lo.rbegin())
                {
                    sum_hi += *lo.rbegin();
                    sum_lo += ar[i] - *lo.rbegin();
                    hi.insert(*lo.rbegin());
                    lo.insert(ar[i]);
                    lo.erase(lo.find(*lo.rbegin()));
                }
                else
                {
                    hi.insert(ar[i]);
                    sum_hi += ar[i];
                }
                
            }
            final.push_back(sum_hi-sum_lo);
        }
        while(q--)
        {
            ll x;cin>>x;
            cout<<final[x-1]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}