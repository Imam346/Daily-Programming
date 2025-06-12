/*----------------------------------------
    author:  Imam
    created: 17.04.2025 11:57:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    int n; cin>>n;
    ll mx_even=INT_MIN;
    ll mn_even=INT_MAX;
    ll mx_odd =INT_MIN;
    ll mn_odd =INT_MAX;
    vector<ll> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]&1){
            mx_odd=max(mx_odd,ar[i]);
            mn_odd=min(mn_odd,ar[i]);
        }
        else{
            mx_even=max(mx_even,ar[i]);
            mn_even=min(mn_even,ar[i]);
        }
    }
    ll a,b,c,d;
    a=b=c=d=0;
    for(int i=0;i<n;i++){
        a+=(mx_even^ar[i]);
        b+=(mn_even^ar[i]);
        c+=(mx_odd^ar[i]);
        d+=(mn_odd^ar[i]);
    }
    ll ans;
    if(mx_even==INT_MIN){ans = max(c,d);}
    else if(mx_odd==INT_MIN){ans=max(a,b);}
    else{ans=max({a,b,c,d});}
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}