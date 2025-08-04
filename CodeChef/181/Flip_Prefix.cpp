/*----------------------------------------
    author:  Imam
    created: 09.04.2025 21:20:29
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int zero=0,one=0,ans=0;
    for(auto c:s){
        c=='0'?zero++:one++;
        if(zero==one)ans++;
    }
    cout<<(1LL<<ans)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}