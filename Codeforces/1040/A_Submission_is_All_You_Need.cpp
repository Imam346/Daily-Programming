/*----------------------------------------
    author:  Imam
    created: 31.07.2025 20:42:41
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0)sum++;
        sum+=x;
    }
    cout<<sum<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}