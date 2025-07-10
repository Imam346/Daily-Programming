/*----------------------------------------
    author:  Imam
    created: 02.07.2025 15:56:18
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,j,k;
    cin>>n>>j>>k;
    int tmp=0,mx=0;
    for(int x,i=0;i<n;i++){
        cin>>x;
        mx = max(mx,x);
        if(i==(j-1))tmp=x;
    }
    if(k>1 || mx==tmp) cout<<"YES\n";
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