/*----------------------------------------
    author:  Imam
    created: 21.07.2025 16:05:07
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k,x; cin>>n>>k;
    x=(n/2)+1;
    n=(n*k);
    int ar[n+1];
    for(int i=1;i<=n;i++) cin>>ar[i];

    long long ans=0;
    for(int i=n-x+1;i>=1 && k;i-=x){
        ans+=ar[i];
        k--;
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