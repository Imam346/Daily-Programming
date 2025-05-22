/*----------------------------------------
    author:  Imam
    created: 01.03.2025 02:36:38
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k,p;
    cin>>n>>k>>p;
    if(k==0){cout<<0<<'\n';return;}
    k = abs(k);
    int x = (k%p==0?k/p:(k/p)+1);
    if(x>n) cout<<-1<<'\n';
    else cout<<x<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}