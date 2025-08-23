/*----------------------------------------
    author:  Imam
    created: 21.08.2025 20:40:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string a; cin>>a;
    int m; cin>>m;
    string b,c; cin>>b>>c;
    deque<char> dq(a.begin(),a.end());
    for(int i=0;i<m;i++){
        if(c[i]=='V') dq.push_front(b[i]);
        else dq.push_back(b[i]);
    }
    
    for(char c:dq)cout<<c;
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}