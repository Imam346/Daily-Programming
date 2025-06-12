#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        int n; cin>>n;
        vector<ll> a(n),b(n+1);
        for(ll &i:a) cin>>i;
        for(ll &i:b) cin>>i;

        ll ans=0, mn=1e18;
        for(int i=0;i<n;i++)
        {
            ans += abs(a[i]-b[i]);
            //if a=2 , b=1,3
            mn = min(mn,abs(a[i]-b[n])+1);
            mn = min(mn,abs(b[i]-b[n])+1);
            // if a=1,b=2 2
            if(min(a[i],b[i])<=b[n] && max(a[i],b[i])>=b[n])
                mn=1;
        }
        cout<<ans+mn<<'\n';
    }
    return 0;
}