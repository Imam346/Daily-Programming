/*----------------------------------------
    author:  Imam
    created: 12.08.2025 13:37:57
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
ll n,p,k;
inline ll power(ll base, ll exp){
    ll res=1;
    while(exp){
        if(exp&1){
            res = (res*base)%p;
            exp--;
        }
        else{
            base = (base*base)%p;
            exp>>=1;
        }
    }
    return res;
}
// Extended Euclid Algorithm: 
// https://www.youtube.com/watch?v=lq285DDdmtw
inline ll extGCD(ll a, ll mod){
    a %= mod;
    if(a==0)return -1;
    ll r0=mod, r1=a;
    ll T1=0, T2=1;
    while(r1){
        ll q = r0/r1; // quotient
        ll r2 = r0-q*r1; // remainder update
        // T = T1 - T2 * quotient
        ll T = T1-T2*q;
        // rotate
        r0=r1, r1=r2;
        T1=T2, T2=T;
    }

    if(r0!=1)return -1; // gcd != 1 → no inverse
    if (T1<0)T1 += mod;
    T1 %= mod; 
    return T1;
}
inline void solve()
{
    cin>>n>>p>>k;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    if(k==0){
        int cnt=count(ar.begin(),ar.end(),0);
        cout<<(cnt?n-1:0)<<'\n';
        return;
    }

    ll ans=0;
    unordered_map<ll,ll>mp;
    for(int i=0;i<n;i++){
        if(ar[i]==0)continue;
        ll b = power(ar[i],3); // ar[i]^3
        ll inv = extGCD(b,p);
        ll need = (inv*k) % p;
        ans+=mp[need];
        mp[b]++;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; //cin>>t;
    while(t--) solve();
    return 0;
}