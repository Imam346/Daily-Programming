/*----------------------------------------
    author:  Imam
    created: 16.05.2025 22:17:38
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    vector<int> br;
    br.push_back(ar[0]);
    for(int i=1;i<n;i++){
        if(ar[i-1]!=ar[i]){
            br.push_back(ar[i]);
        }
    }
    
    int ans = int(br.size());
    for(int i=1;i<int(br.size())-1;i++){
        if(br[i-1]<br[i] && br[i]<br[i+1]) ans--;
        if(br[i-1]>br[i] && br[i]>br[i+1]) ans--;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}