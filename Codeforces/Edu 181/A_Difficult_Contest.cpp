/*----------------------------------------
    author:  Imam
    created: 22.07.2025 20:37:43
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    string s; cin>>s;
    deque<char>dq;
    for(char c:s){
        if(c=='F' || c=='N')dq.push_back(c);
        else dq.push_front(c);
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