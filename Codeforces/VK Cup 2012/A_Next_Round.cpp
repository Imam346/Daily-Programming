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
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int cnt=0;
    for(int i=0;i<n;i++)
        if(ar[i]>=ar[k-1] && ar[i]>0) cnt++;
    cout<<cnt<<endl;
    return 0;
}