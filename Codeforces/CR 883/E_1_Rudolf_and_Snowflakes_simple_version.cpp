/*----------------------------------------
    author:  Imam
    created: 18.08.2025 17:20:06
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;

inline ll power(ll k, ll exp, ll n){
    ll res=1;
    for(ll i=1;i<=exp;i++){
        res*=k;
        if(res>n)return n+1;
    }
    return res;
}
inline void solve()
{
    ll n; cin>>n;
    for(ll i=2;i<32;i++){
        ll l=2, r=(int)1e3;
        while(l<=r){
            ll mid = l+(r-l)/2;
            ll sum=0;
            for(ll j=0;j<=i;j++){
                sum+=power(mid,j,n);
                if(sum>n){break;}
            }
            if(sum==n){
                cout<<"YES\n";
                return;
            }
            else if(sum<n) l=mid+1;
            else r=mid-1;
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
