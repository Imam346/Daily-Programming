/*----------------------------------------
    author:  Imam
    created: 04.03.2025 15:19:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void solve()
{
    ll n; cin>>n;
    string s; cin>>s;
    if(n<3){cout<<0<<'\n';return;}
    ll hyphen = 0;
    for(char c:s){if(c=='-')hyphen++;}
    ll dash = n-hyphen;
    ll part1 = hyphen/2;
    ll part2 = hyphen-part1;
    // cout<<part1<<" "<<dash<<" "<<part2<<endl;
    cout<<(part1*dash*part2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}