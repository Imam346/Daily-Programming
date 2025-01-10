/*----------------------------------------
    author:  Imam
    created: 07.01.2025 23:47:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<ll> ar(n),br(m);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    ll GCD=0;
    for(int i=1;i<n;i++)
        GCD = gcd(GCD,abs(ar[0]-ar[i]));
    for(int i=0;i<m;i++){
        ll ans = gcd(ar[0]+br[i], GCD);
        cout<<ans<<" ";
    }
    return 0;
}