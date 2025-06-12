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
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> ar(n);
        int fvt =-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i+1==f)
            {
                fvt=ar[i];
            }
        }

        sort(ar.begin(),ar.end(),greater<int>());
        //Count how many elements are greater than the favorite cube's value
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>fvt) cnt++;
            else break;
        }

        //count how many elements are equal to the favorite cube's value
        ll cnt2=0;
        for(int i=cnt;i<n;i++)
        {
            if(ar[i]==fvt) cnt2++;
            else break;
        }

        if(cnt>=k) cout<<"NO"<<'\n';
        else if(cnt+cnt2>k) cout<<"MAYBE"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}