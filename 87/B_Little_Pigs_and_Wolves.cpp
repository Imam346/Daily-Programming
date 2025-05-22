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
    int n,m;
    cin>>n>>m;
    vector<vector<char>> ar(n+2, vector<char>(m+2, '.'));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>ar[i][j];
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ar[i][j]=='W' && ar[i][j-1]=='P')
            {
                cnt++;     
                ar[i][j]='.', ar[i][j-1]='.';
            }
            if(ar[i][j]=='W' && ar[i-1][j]=='P')
            {
                cnt++;
                ar[i][j]='.', ar[i-1][j]='.';
            }
            if(ar[i][j]=='W' && ar[i][j+1]=='P')
            {
                cnt++;
                ar[i][j]='.', ar[i][j+1]='.';
            }
            if(ar[i][j]=='P' && ar[i-1][j]=='W')
            {
                cnt++;
                ar[i][j]='.', ar[i-1][j]='.';
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}