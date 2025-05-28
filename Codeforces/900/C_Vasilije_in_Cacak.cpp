/*----------------------------------------
    author:  Imam
    created: 06.03.2025 13:06:37
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    
    ll sum1 = n*(n+1)/2;
    ll sum2 = k*(k+1)/2;
    ll new_n = n-k;
    ll sum3 = new_n*(new_n+1)/2;
    if(sum1>=x && sum2<=x && (sum1-sum3)>=x)cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) {solve();}
    return 0;
}