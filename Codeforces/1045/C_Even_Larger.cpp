/*----------------------------------------
    author:  Imam
    created: 02.09.2025 00:40:12
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    
    if((n&1)==0){
        n++;
        ar.push_back(0);
    }
    ll ans=0;
    for(int i=1;i<n;i+=2){
        if(ar[i-1]+ar[i+1]>ar[i]){
            int x = min(ar[i-1]+ar[i+1]-ar[i], ar[i+1]);
            ar[i+1]-=x;
            ans+=x;
        }
        if(ar[i-1]>ar[i]){
            int x = ar[i-1]-ar[i];
            ans+=x;
            ar[i-1]=ar[i];
        }
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