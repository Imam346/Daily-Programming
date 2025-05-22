#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<int> a(k+1,0), b(k+1,0);
        vector<long double> sp(k+1,0);

        for(int i=1;i<=k;i++)
        {
            int x; cin>>x;
            a[i] = x;
        }
        for(int i=1;i<=k;i++)
        {
            int x; cin>>x;
            b[i] = x;
        }
        for(int i=1;i<=k;i++)
            sp[i-1] = (long double)(a[i]-a[i-1])/(long double)b[i]-b[i-1];
        
        while(q--)
        {
            ll d; cin>>d;
            int idx = lower_bound(a.begin(),a.end(),d)-a.begin();
            if(d==a[idx])
            {
                cout<<b[idx]<<" ";
                continue;
            }
            else idx--;
            ll ans = b[idx];
            ll t = ((d-a[idx])*(b[idx+1]-b[idx]))/(a[idx+1]-a[idx]);
            cout<<ans+t<<" ";

        }
        cout<<'\n';
    }
    return 0;
}