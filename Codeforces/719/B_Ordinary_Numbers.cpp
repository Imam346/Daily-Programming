/*----------------------------------------
    author:  Imam
    created: 20.02.2025 22:53:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline void solve()
{
    ll n; cin>>n;
    if(n<=9){cout<<n<<'\n';return;}
    ll ans=9;
    for(ll i=1;i<=9;i++){
        ll cur = i*11;
        while(cur<=n){
            ans++;
            cur = cur*10+i;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll t; cin>>t;
    while(t--) {solve();}
    return 0;
}