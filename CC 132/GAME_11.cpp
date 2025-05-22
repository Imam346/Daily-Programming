#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(n<4 || m<4 || (n+m)<11)
        {
            cout<<-1<<'\n';
            continue;
        }

        

        ll sum=0;
        ll aa=n-1,bb=m-1;
        for(ll i=0;i<4;i++)
        {
            sum+=a[aa--];
            sum+=b[bb--];
        }
        
        for(ll i=0;i<3;i++)
        {
            if(aa>=0 && bb>=0)
            {
                if(a[aa]>=b[bb])
                {
                    sum+=a[aa];
                    aa--;
                }
                else
                {
                    sum+=b[bb];
                    bb--;
                }
            }
            else if(aa>=0)
            {
                sum+=a[aa];
                aa--;
            }
            else
            {
                sum+=b[bb];
                bb--;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}