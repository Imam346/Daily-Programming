/*----------------------------------------
    author:  Imam
    created: 10.08.2025 20:54:16
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        if(i&1)cout<<-1<<" ";
        else{
            if(i==n)cout<<2<<" ";
            else cout<<3<<" ";
        }
    }
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}