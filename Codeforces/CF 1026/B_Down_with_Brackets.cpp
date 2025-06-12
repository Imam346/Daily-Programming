/*----------------------------------------
    author:  Imam
    created: 24.05.2025 20:51:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    string s; cin>>s;
    stack<char> st;
    int cnt=0;
    for(char c:s){
        if(c=='(') st.push(c);
        else{
            st.pop();
            if(st.empty())cnt++;
            if(cnt==2){break;}
        }
    }
    cout<<(cnt==2?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}