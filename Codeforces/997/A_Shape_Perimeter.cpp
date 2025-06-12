/*----------------------------------------
    author:  Imam
    created: 18.01.2025 17:24:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m;
    cin>>n>>m;
    int ans = n*4*m;
    int x,y; cin>>x>>y;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        ans -= 2*(m-x+m-y);
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}