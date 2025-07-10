/*----------------------------------------
    author:  Imam
    created: 02.07.2025 17:13:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k;
    cin>>n>>k;
    string s; cin>>s;
    int one = count(s.begin(),s.end(),'1');
    if(one<=k || (n-k)<k)cout<<"Alice\n";
    else cout<<"Bob\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}