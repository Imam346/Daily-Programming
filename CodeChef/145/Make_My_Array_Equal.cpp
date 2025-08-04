/*----------------------------------------
    author:  Imam
    created: 04.08.2025 11:09:43
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x!=0)mp[x]++;
    }
    
    cout<<(mp.size()<=1?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}