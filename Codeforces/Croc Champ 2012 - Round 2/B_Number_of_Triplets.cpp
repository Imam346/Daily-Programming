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
    int x[3005],y[3005];
    set<pair<int,int>> s;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        s.insert({x[i],y[i]});
    }

    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            //Calculate the middle point of B
            if((x[i]+x[j])%2==0 && (y[i]+y[j])%2==0)
            {
                int B_x = x[i]+x[j];
                int B_y = y[i]+y[j];
                ans += s.find({B_x/2, B_y/2}) != s.end();
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

/*
Bx = (Ax + Cx)/2
By = (Ay + Cy)/2
*/