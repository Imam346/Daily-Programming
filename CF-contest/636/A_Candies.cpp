/*----------------------------------------
    author:  Imam
    created: 13.02.2025 19:55:02
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline void solve()
{
    ll n; cin>>n;
    ll k=2,x, tmp;
    while(true){
        tmp = pow(2,k)-1;
        if(n%tmp==0){
            x=n/tmp;
            break;
        }
        k++;
    }
    cout<<x<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

/*

x + 2x + 4x + 8x +...+ 2^k-1 x = n 
the series is a geomatric series with the first term x and the common ratio 2.

The sum of the first k terms of this geometric series can be given by the formula:
S = x(2^0 + 2^1 + 2^2 + 2^3 + ... + 2^k-1)
S = x(1 + 2 + 4 + 8 + ... + 2^k-1)
S = x(2^k - 1) where [1+2+4+8+...+2^k-1 = 2^k - 1]

so, x(2^k - 1) = n 
*/