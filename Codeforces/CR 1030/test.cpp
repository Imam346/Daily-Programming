/*----------------------------------------
    author:  Imam
    created: 13.06.2025 16:15:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    while(n){
        if(n&1) cout<<1;
        else cout<<0;
        n>>=1;
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}