/*----------------------------------------
    author:  Imam
    created: 08.08.2025 11:05:58
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x; cin>>n>>x;
    string s; cin>>s;
    
    int l=x-1, r=n-x;
    int cnt1=0,cnt2=0;
    for(int i=x-2;i>=0;i--){
        if(s[i]=='#')break;
        l--,cnt1++;
    }
    for(int i=x;i<n;i++){
        if(s[i]=='#')break;
        r--,cnt2++;
    }

    if(l<r)l=min(l+cnt1, r);
    else r = min(l, r+cnt2);
    cout<<min(l,r)+1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}