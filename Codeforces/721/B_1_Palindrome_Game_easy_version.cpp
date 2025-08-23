/*----------------------------------------
    author:  Imam
    created: 21.08.2025 18:26:20
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int zero = count(s.begin(),s.end(),'0');

    if(zero&1) cout<<(zero==1?"BOB":"ALICE")<<'\n';
    else cout<<"BOB\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}