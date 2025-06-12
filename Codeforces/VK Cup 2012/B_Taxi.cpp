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
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else four++;
    }

    ll cnt= four;
    //3 and 1
    int mn = min(one, three);
    cnt += mn;
    one -=mn, three -=mn;
    
    cnt += three;
    cnt += two/2;
    
    if(two%2==1)
    {
        cnt++;
        one -= min(2,one);
    }
    if(one>0)
    {
        cnt += (one+3)/4;
    }
    cout<<cnt<<endl;
    return 0;
}