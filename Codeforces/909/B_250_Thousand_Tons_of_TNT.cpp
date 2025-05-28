/*----------------------------------------
    author:  Imam
    created: 15.05.2025 16:06:05
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void number_of_divisor(int n, vector<int>&br)
{
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            br.push_back(i);
            br.push_back(n/i);
        }
    }
}
inline void solve()
{
    int n; cin>>n;
    vector<ll> ar(n+1);
    for(int i=1;i<=n;i++) cin>>ar[i];

    vector<int> br;
    number_of_divisor(n,br);
    vector<ll> pref(n+1,0);
    for(int i=1;i<=n;i++){
        pref[i]=ar[i]+pref[i-1];
    }
    // for(auto val:pref) cout<<val<<" ";
    ll ans=INT_MIN;
    for(int i=0;i<int(br.size());i++){
        //find the maximum & minimum value
        int k = br[i];
        ll cur=pref[k];
        ll mx=cur,mn=cur;
        for(int j=k+k;j<=n;j+=k){
            ll tmp = pref[j]-cur;
            mx=max(mx,tmp);
            mn=min(mn,tmp);
            cur=pref[j];
        }
        ans = max(ans,mx-mn);
    }
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