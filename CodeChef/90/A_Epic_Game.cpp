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
    int a,b,n;
    cin>>a>>b>>n;

    bool flag=false;
    while(true)
    {
        int aa = gcd(a,n);
        n = n-aa;
        if(n==0)
        {
            flag=true;
            break;
        }
        int bb = gcd(b,n);
        n = n-bb;
        if(n==0) break;
    }
    if(flag) cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}