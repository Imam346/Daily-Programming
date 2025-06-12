/*----------------------------------------
    author:  Imam
    created: 15.03.2025 20:35:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal_min(ll x,ll n,ll m)
{
    for(int i=1;i<=n;i++){
        x=x/2;
        if(x==0){break;}
    }
    for(int i=1;i<=m;i++){
        x=(x+1)/2;
        if(x==0 || x==1){break;}
    }
    return x;
}
ll cal_max(ll x, ll n,ll m)
{
    for(int i=1;i<=m;i++){
        x=(x+1)/2;
        if(x==0 || x==1){break;}
    }
    for(int i=1;i<=n;i++){
        x=x/2;
        if(x==0){break;}
    }
    return x;
}
inline void solve()
{
    ll x,n,m;
    cin>>x>>n>>m;
    
    ll mn = cal_min(x,n,m);
    ll mx = cal_max(x,n,m);
    if(mn>mx){swap(mn,mx);}
    cout<<mn<<" "<<mx<<'\n';
}   
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}