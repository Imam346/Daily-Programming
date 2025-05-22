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
        int a,b,c;
        cin>>a>>b>>c;
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(a), pq.push(b), pq.push(c);
        for(int i=1;i<=5;i++)
        {
            int val = pq.top();
            pq.pop();
            pq.push(val+1);
        }

        vector<int> v;
        while(!pq.empty())
        {
            int val = pq.top();
            pq.pop();
            v.push_back(val);
        }
        
        cout<<(v[0]*v[1]*v[2])<<endl;
    }
    return 0;
}