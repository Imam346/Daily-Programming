/*----------------------------------------
    author:  Imam
    created: 16.05.2025 03:42:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    ll x,n; cin>>x>>n;
    if(n==0){cout<<x<<'\n';return;}
    ll a = (n-1)/2;
    ll b = (n-1)%2;
    ll ans;
    if(x&1){
        if(a&1 && b==0){
            ans = -n-2+x+1;
        }
        if(a&1 && b==1){
            ans = x;
        }
        if((a&1)==0 && b==0){
            ans = n-1+1+x;//or n+x
            
        }
        if((a&1)==0 && b==1){
            ans=n-2+x+1-n;
        }
        cout<<ans<<'\n';
        return;
    }
    //that means x is even number
    if(a&1 && b==0){
        ans = (n+2)+x-1;
    }
    if(a&1 && b==1){
        ans = x;
    }
    if((a&1)==0 && b==0){
        ans = -n+x;
    }
    if((a&1)==0 && b==1){
        ans = n+x-(n-2) - 1;// or n+x-(n-1)
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