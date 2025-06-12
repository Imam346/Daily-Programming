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
    int n; cin>>n;
    int ar[n];
    int mx = INT_MIN, mn = INT_MAX;
    int mx_idx = -1, mn_idx = -1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>mx)
        {
            mx = ar[i];
            mx_idx = i;
        }
        if(ar[i]<=mn)
        {
            mn = ar[i];
            mn_idx = i;
        }
    }

    bool flag=false;
    if(mn_idx < mx_idx) flag=true;

            //last index theke biyog
    mn_idx = (n-1) - mn_idx;
    int ans = mx_idx + mn_idx;
    if(flag) cout<<ans-1<<endl;
    else cout<<ans<<endl;
    return 0;
}