//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;

inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    stack<char> st;
    for(char c:s){
        if(c=='(') st.push(c);
        else{
            if(!st.empty()){
                if(st.top()=='(') st.pop();
                else st.push(c);
            }
            else st.push(c);
        }
    }
    cout<<st.size()/2<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}