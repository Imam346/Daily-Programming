/*----------------------------------------
    author:  Imam
    created: 27.05.2025 14:46:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n; 
inline ll rectangle(ll mnX, ll mxX, ll mnY, ll mxY)
{
    ll h = mxX-mnX+1, w = mxY-mnY+1;
    if((h*w)<n){return min(h*(w+1),w*(h+1));}
    return h*w;
}
inline void solve()
{
    cin>>n;
    multiset<ll>x,y;
    vector<pair<ll,ll>> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i].first>>ar[i].second;
        x.insert(ar[i].first);
        y.insert(ar[i].second);
    }

    //Exception
    if(n==1){
        cout<<1<<'\n';
        return;
    }

    ll ans=LLONG_MAX;
    for(auto [xi,yi]:ar){
        x.erase(x.find(xi));
        y.erase(y.find(yi));
        ll mnX = *x.begin(), mxX = *x.rbegin();
        ll mnY = *y.begin(), mxY = *y.rbegin();

        ans = min(ans,rectangle(mnX,mxX,mnY,mxY));
        //reinsert xi and yi
        x.insert(xi);
        y.insert(yi);
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