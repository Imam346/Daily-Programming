/*----------------------------------------
    author:  Imam
    created: 01.08.2025 20:20:04
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    int even=0,odd=0;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x&1)odd++;
        else even++;
    }
    if(n&1){
        int pos1=n/2;
        int pos2=pos1+1;
        if(even==pos1 && odd==pos2)cout<<"YES\n";
        else if(even==pos2 && odd==pos1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<(even==odd?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
//https://www.hackerrank.com/contests/ycpc-beginners-round-2k25/challenges