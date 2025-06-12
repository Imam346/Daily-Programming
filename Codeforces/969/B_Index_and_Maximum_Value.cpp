#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> ar(n);
        ll mx = INT_MIN;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            mx = max(mx,ar[i]);
        }

        vector<int> vec;
        while(m--)
        {
            char c;
            ll l,r;
            cin>>c>>l>>r;

            if(l<=mx && mx<=r)//5
            {// 5 5 4 4 3
                if(c=='+')
                {
                    mx = ++mx;
                    vec.push_back(mx);
                }
                else // c=='-'
                {
                    mx = --mx;
                    vec.push_back(mx);
                }
            }
            else vec.push_back(mx);
        }

        for(auto x:vec) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}