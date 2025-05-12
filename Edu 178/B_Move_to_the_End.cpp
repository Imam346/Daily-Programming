/*----------------------------------------
    author:  Imam
    created: 28.04.2025 21:40:23
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n; cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar) cin>>i;
    
    vector<ll> mx_ar(n);
    mx_ar[0]=ar[0];
    for(int i=1;i<n;i++){
        mx_ar[i]=max(mx_ar[i-1],ar[i]);
    }
    ll sum=0;
    for(int i=n-1;i>=0;i--){
        cout<<mx_ar[i]+sum<<" ";
        sum+=ar[i];
    }
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}