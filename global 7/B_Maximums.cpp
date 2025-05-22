//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin>>n;
    vector<ll> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    vector<ll> ans(n);
    ans[0]=ar[0];
    ll mx = ans[0];
    for(int i=1;i<n;i++){
        ans[i] = mx+ar[i];
        mx = max(mx,ans[i]);
    }
    for(auto val:ans) cout<<val<<" ";
    return 0;
}