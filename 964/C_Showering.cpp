#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline void solve()
{
    ll n,s,m;
    cin>>n>>s>>m;
    vector<pair<ll,ll>> vec;
    for(ll i=1;i<=n;i++)
    {
        ll l,r;
        cin>>l>>r;
        vec.push_back({l,r});
    }
    sort(vec.begin(),vec.end());

    for(ll i=0;i<n;i+=1)
    {
        ll cur;
        if(i==0)
        {
            cur = vec[i].first;
            if(cur>=s)
            {
                cout<<"YES"<<'\n';
                return;
            }
            if(i==n-1)
            {
                cur = vec[i].second;
                if((m-cur)>=s)
                {
                    cout<<"YES"<<'\n';
                    return;
                }
            }
        }
        else if(i==(n-1))
        {
            cur = vec[i].second;
            if((m-cur)>=s)
            {
                cout<<"YES"<<'\n';
                return;
            }
        }
        cur = vec[i].second;
        ll cur2 = vec[i+1].first;
        if((cur2-cur)>=s && i<n-1)
        {
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
}
int main()
{
    Code_By_Imam

    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}