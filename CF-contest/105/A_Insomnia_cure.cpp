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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int cnt=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}