/*----------------------------------------
    author:  Imam
    created: 23.05.2025 22:08:42
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int l,r; cin>>l>>r;
    int ans=l,mx=INT_MIN;
    for(int i=l;i<=min(l+100,r);i++){
        string s = to_string(i);
        char mxChar = *max_element(s.begin(),s.end());
        char mnChar = *min_element(s.begin(),s.end());
        if(((mxChar-'0')-(mnChar-'0'))>mx){
            mx=(mxChar-'0')-(mnChar-'0');
            ans=i;
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