/*----------------------------------------
    author:  Imam
    created: 17.04.2025 17:59:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    s+=s;
    int idx=-1,ans=0;
    for(int i=2*n-1;i>=0;i--){
        if(s[i]=='g') idx=i;
        else if(s[i]==c){
            ans = max(ans,idx-i);
            cout<<idx<<" "<<i<<endl;
            cout<<ans<<endl;
        }
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