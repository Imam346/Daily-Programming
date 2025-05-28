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

int main()
{
    Code By Imam
    int n; cin>>n;
    if(n%2!=0) cout<<-1<<endl;
    else
    {
        vector<int> v;
        int even=2, odd=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                v.push_back(even);
                even +=2;
            }
            else
            {
                v.push_back(odd);
                odd +=2;
            }
        }
        for(auto val:v) cout<<val<<" ";
    }
    return 0;
}