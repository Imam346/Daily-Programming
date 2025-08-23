/*----------------------------------------
    author:  Imam
    created: 10.08.2025 22:02:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    int n; cin>>n;
    vector<ll> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    if(ar[n-1]!=br[n-1]){cout<<"NO\n";return;}
    bool flag=true;
    for(int i=n-2;i>=0;i--){
        ll a=ar[i];
        ll b=ar[i]^ar[i+1];
        ll c=ar[i]^br[i+1];
        if(br[i]!=a && br[i]!=b && br[i]!=c){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}