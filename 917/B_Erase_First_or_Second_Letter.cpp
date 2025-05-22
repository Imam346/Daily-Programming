/*----------------------------------------
    author:  Imam
    created: 21.04.2025 12:39:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    long long ans=0,unique=0;
    set<char> st;
    for(char c:s){
        if(!st.count(c))unique++;
        st.insert(c);
        ans+=unique;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}