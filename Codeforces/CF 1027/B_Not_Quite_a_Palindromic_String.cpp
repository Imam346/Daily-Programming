/*----------------------------------------
    author:  Imam
    created: 26.05.2025 22:19:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int zero = count(s.begin(),s.end(),'0');
    int one = n-zero;
    
    while(k){
        if(zero>one)zero-=2;
        else one-=2;
        k--;
    }
    cout<<(zero==one?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}