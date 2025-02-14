/*----------------------------------------
    author:  Imam
    created: 08.02.2025 22:26:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll x = ((k-1)/(n-1));
    cout<<(k+x)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}