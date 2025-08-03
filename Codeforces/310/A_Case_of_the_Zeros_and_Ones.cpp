/*----------------------------------------
    author:  Imam
    created: 25.07.2025 01:14:04
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int zero = count(s.begin(),s.end(),'0');
    int one = n-zero;
    cout<<n-min(zero,one)*2;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; //cin>>t;
    while(t--) solve();
    return 0;
}