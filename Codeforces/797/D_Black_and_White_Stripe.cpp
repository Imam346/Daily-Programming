/*----------------------------------------
    author:  Imam
    created: 11.07.2025 01:42:12
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int l=0,r=0,cnt=0, ans=INT_MAX;
    while(r<n){
        if(s[r]=='W')cnt++;
        if((r-l+1)==k){
            ans=min(ans,cnt);
            if(s[l]=='W')cnt--;
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}