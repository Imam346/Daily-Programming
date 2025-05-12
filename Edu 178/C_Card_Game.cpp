/*----------------------------------------
    author:  Imam
    created: 29.04.2025 11:29:49
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    if(s[0]==s[n-1]){
        if(s[0]=='A') cout<<"Alice\n";
        else cout<<"Bob\n";
        return;
    }
    int a = count(s.begin(),s.end(),'A');
    int b = count(s.begin(),s.end(),'B');
    if(s[n-1]=='B'){
        if(b>=2) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
    else{
        if(s[n-1]=='A' && s[n-2]=='A') cout<<"Alice\n";
        else cout<<"Bob\n";
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