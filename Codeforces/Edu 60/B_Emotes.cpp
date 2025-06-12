/*----------------------------------------
    author:  Imam
    created: 16.02.2025 15:29:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.rbegin(),ar.rend());
    // k+1 th value will be second maximum value
    // and number of x will be change
    ll x = m/(k+1);
    m -= x; // current number of m will be maximum value
    ll ans = (m*ar[0]) + (x*ar[1]);
    cout<<ans<<'\n';
    return 0;
}