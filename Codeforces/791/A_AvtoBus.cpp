/*----------------------------------------
    author:  Imam
    created: 05.04.2025 13:02:20
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    ll n; cin>>n;
    if(n<4 || (n&1)) cout<<-1<<'\n';
    else{
        ll mx = n/4;
        ll mn = n%6?(n/6)+1:n/6;
        cout<<mn<<" "<<mx<<'\n';
    }

}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}