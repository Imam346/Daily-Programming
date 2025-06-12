/*----------------------------------------
    author:  Imam
    created: 05.04.2025 21:32:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void solve()
{
    ll n,k,x; cin>>n>>k>>x;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    ll sum=accumulate(ar.begin(),ar.end(),0LL);
    if((sum*k)<x){cout<<0<<'\n';return;}

    //binary search
    ll l=1,r=k;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if((mid*sum)>=x){
            r=mid-1;
        }
        else l=mid+1;
    }
    // cout<<r<<endl;
    ll bad=n*r;
    ll curSum = sum*r;
    for(int i=n-1;i>=0;i--){
        curSum+=ar[i];
        if(curSum>=x){break;}
        else{bad++;}
    }
    cout<<(n*k)-bad<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}