//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;

inline void solve()
{
    int x,y,n;
    cin>>x>>y>>n;
    // cout<<x<<" "<<y<<" "<<n<<endl;
    int ans = ((n-y)/x)*x+y;
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}