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
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        ll ans=0;
        //case 1
        if(a1>b1 && a2>b2)ans++;
        else if(a1==b1 && a2>b2) ans++;
        else if(a1>b1 && a2==b2) ans++;
        //case 2
        if(a1>b2 && a2>b1) ans++;
        else if(a1==b2 && a2>b1) ans++;
        else if(a1>b2 && a2==b1) ans++;
        //case 3
        if(a2>b1 && a1>b2) ans++;
        else if(a2==b1 && a1>b2) ans++;
        else if(a2>b1 && a1==b2) ans++;
        //case 4
        if(a2>b2 && a1>b1) ans++;
        else if(a2==b2 && a1>b1) ans++;
        else if(a2>b2 && a1==b1) ans++;

        cout<<ans<<endl;
    }
    return 0;
}