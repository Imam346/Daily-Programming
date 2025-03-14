/*----------------------------------------
    author:  Imam
    created: 12.03.2025 00:35:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline bool isPowerOfTwo(ll n){
    if(n<=0){return false;}
    return (n & (n-1))==0;
}
inline void solve()
{
    int x; cin>>x;
    if(isPowerOfTwo(x)){ cout<<-1<<'\n'; return;}
    if(isPowerOfTwo(x+1)){cout<<-1<<'\n';return;}
    int a = log2(x);
    int y = (1LL<<a)-1;
    cout<<y<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}