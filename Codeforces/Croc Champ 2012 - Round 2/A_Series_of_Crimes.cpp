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
    vector<vector<char>> ar(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>ar[i][j];
    }

    int cnt=0;
    int row=-1,col=-1;
    //Required row is row that have only one star
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='*') cnt++;
            if(ar[i][j]=='.') row=i;
        }
        if(cnt==1) break;
    }
    //Required colume is colume that have only one star
    for(int j=0;j<m;j++)
    {
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i][j]=='*') cnt++;
            if(ar[i][j]=='.') col=j;
        }
        if(cnt==1) break;
    }

    row++,col++; //1 based index
    cout<<row<<" "<<col<<endl;
    return 0;
}