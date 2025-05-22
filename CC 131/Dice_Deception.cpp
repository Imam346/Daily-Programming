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
        ll n,k;
        cin>>n>>k;
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        for(ll i=1;i<=n;i++)
        {
            ll x; cin>>x;
            pq.push(x);
        }
        ll sum=0;
        while(!pq.empty())
        {
            ll val = pq.top();
            pq.pop();
            if(val<4 && k>0)
            {
                if(val==1)
                {
                    sum +=6;
                }
                else if(val==2)
                {
                    sum += 5;
                }
                else if(val==3)
                {
                    sum += 4;
                }
                k--;
            }
            else sum += val;
        }
        cout<<sum<<'\n';
    }
    return 0;
}