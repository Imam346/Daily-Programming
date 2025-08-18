/*----------------------------------------
    author:  Imam
    created: 18.08.2025 19:59:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = uint64_t;

inline ll power(ll k, ll exp, ll n){
    ll res=1;
    for(int i=1;i<=exp;i++){
        if(res>(n/k))return n+1;
        res*=k;
    }
    return res;
}
inline void solve()
{
    ll n; cin>>n;
    for(ll i=2;i<64;i++){
        // k is minimum 2 and maximum 1e9
        ll l=2, r=(int)1e9+10; //(1e9^2 = 1e18)
        while(l<=r){
            ll k = l+(r-l)/2;
            ll sum=0;
            for(ll j=0;j<=i;j++){
                sum+=power(k,j,n);
                if(sum>n){break;}
            }
            if(sum==n){
                cout<<"YES\n";
                return;
            }
            else if(sum<n) l=k+1;
            else r=k-1;
        }
    }
    cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
