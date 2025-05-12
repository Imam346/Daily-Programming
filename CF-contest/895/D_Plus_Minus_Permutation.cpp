/*----------------------------------------
    author:  Imam
    created: 04.05.2025 23:48:24
----------------------------------------*/
#include<bits/stdc++.h>
#define ll long long
inline void solve()
{
    ll n,x,y;
    std::cin>>n>>x>>y;
    ll a=n/x,b=n/y;
    ll lcm = std::lcm(x,y);
    ll common = n/lcm;
    a-=common;
    b-=common;
    // cout<<a<<" "<<b<<endl;
    ll sum1 = n*(n+1)/2;
    ll extra = n-a;
    sum1 -= (extra*(extra+1)/2);
    ll sum2 = b*(b+1)/2;
    std::cout<<sum1-sum2<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t; std::cin>>t;
    while(t--) solve();
    return 0;
}