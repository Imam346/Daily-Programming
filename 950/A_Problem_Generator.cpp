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
        int n,m;
        cin>>n>>m;
        string s; cin>>s;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
        for(char ch:s)
        {
            if(ch=='A') a++;
            else if(ch=='B') b++;
            else if(ch=='C') c++;
            else if(ch=='D') d++;
            else if(ch=='E') e++;
            else if(ch=='F') f++;
            else g++;
        }

        int cnt=0;
        if(a<m)  cnt+= m-a;
        if(b<m) cnt+=m-b;
        if(c<m) cnt+=m-c;
        if(d<m) cnt+=m-d;
        if(e<m) cnt+=m-e;
        if(f<m) cnt+=m-f;
        if(g<m) cnt+=m-g;

        cout<<cnt<<'\n';
        // cout<<a<<endl;
        // cout<<b<<endl;
        // cout<<c<<endl;
        // cout<<d<<endl;
        // cout<<e<<endl;
        // cout<<f<<endl;
        // cout<<g<<endl;
    }
    return 0;
}