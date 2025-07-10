/*----------------------------------------
    author:  Imam
    created: 05.07.2025 20:49:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll a,b,x,y; cin>>a>>b>>x>>y;
    if(a>b){
        if(a&1 && b==a-1) cout<<y<<'\n';
        else cout<<-1<<'\n';
        return;
    }

    ll cost=0;
    while(a<b){
        if((a&1)==0){cost+=min(x,y); a++;}
        else{cost+=x; a++;}
    }
    cout<<(a==b?cost:-1)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}