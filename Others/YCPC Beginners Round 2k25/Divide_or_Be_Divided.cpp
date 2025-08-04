/*----------------------------------------
    author:  Imam
    created: 01.08.2025 20:05:38
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x,y; cin>>n>>x>>y;
    string s; cin>>s;
    int a = s[x-1]-'0';
    int b = s[y-1]-'0';
    if(a!=0 && b%a==0)cout<<"YES\n";
    else if(b!=0 && a%b==0)cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; //cin>>t;
    while(t--) solve();
    return 0;
}
//https://www.hackerrank.com/contests/ycpc-beginners-round-2k25/challenges