/*----------------------------------------
    author:  Imam
    created: 08.08.2025 17:59:35
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    set<int> st;
    int neg=0;
    for(int x,i=1;i<=n;i++){
        cin>>x;
        if(x==-1)neg++;
        else st.insert(x);
    }
    
    if(neg==n || (st.size()==1 && *st.begin()!=0)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}