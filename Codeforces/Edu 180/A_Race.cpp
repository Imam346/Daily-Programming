/*----------------------------------------
    author:  Imam
    created: 23.06.2025 20:49:06
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int a,x,y;
    cin>>a>>x>>y;
    bool flag=false;
    for(int i=min(x,y);i<=max(x,y);i++){
        if(abs(i-x)<abs(i-a) && abs(i-y)<abs(i-a)){
            flag=true;
            break;
        }
    }
    cout<<(flag?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}