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
        vector<vector<char>> grid(n,vector<char>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }

        int first_row=-1, last_row=-1;
        int first_col =-1,last_col=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='#')
                {
                    if(first_row==-1)
                    {
                        first_row=i;
                        break;
                    }
                }
            }
            if(first_row!=-1) break;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='#')
                {
                    if(last_row==-1)
                    {
                        last_row=i;
                        break;
                    }
                }
            }
            if(last_row!=-1) break;
        }

        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]=='#')
                {
                    if(first_col==-1)
                    {
                        first_col=j;
                        break;
                    }
                }
            }
            if(first_col!=-1) break;
        }

        for(int j=m-1;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]=='#')
                {
                    if(last_col==-1)
                    {
                        last_col=j;
                        break;
                    }
                }
            }
            if(last_col!=-1) break;
        }

        first_row++,last_row++;
        first_col++,last_col++;

        int row = first_row+(last_row-first_row)/2;
        int col = first_col+(last_col-first_col)/2;
        cout<<row<<" "<<col<<'\n';
    }
    return 0;
}