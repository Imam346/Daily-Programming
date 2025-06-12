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
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        
        //convert 1 based index
        a = "0"+a;
        b = "0"+b;

        vector<vector<int>> PrefA(n+1, vector<int>(26)), PrefB(n+1, vector<int>(26));
        for(int i=1;i<=n;i++)
        {
            PrefA[i] = PrefA[i-1];
            int idx = a[i]-'a';
            PrefA[i][idx]++;
        }
        for(int i=1;i<=n;i++)
        {
            PrefB[i] = PrefB[i-1];
            int idx = b[i]-'a';
            PrefB[i][idx]++;
        }

        while(q--)
        {
            int l,r;
            cin>>l>>r;

            int ans=0;
            for(int i=0;i<26;i++)
            {
                int aa = PrefA[r][i] - PrefA[l-1][i];
                int bb = PrefB[r][i] - PrefB[l-1][i];
                if(aa>=bb)
                    ans += aa-bb;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}