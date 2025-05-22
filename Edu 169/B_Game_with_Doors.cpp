#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline void solve()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int mx = max(a,x);
    int mn = min(b,y);

    if(mn<mx) cout<<1<<endl;
    else if(mn==mx) cout<<2<<endl;
    else
    {
        int ans = 0;
        if(min(a,x) < max(a,x))
            ans++;
        if(min(b,y) < max(b,y))
            ans++;
        ans += (mn-mx);
        cout<<ans<<'\n';
    }
}
int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--) solve();
    return 0;
}