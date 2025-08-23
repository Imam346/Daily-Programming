/*----------------------------------------
    author:  Imam
    created: 07.08.2025 13:40:24
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    vector<int>dif(n);
    int maxD = INT_MIN;
    for(int i=0;i<n;i++){
        dif[i]=ar[i]-br[i];
        maxD = max(maxD, dif[i]);
    }

    vector<int> ans;
    for(int i=0;i<n;i++){
        if(dif[i]==maxD){
            ans.push_back(i+1);
        }
    }
    
    cout<<ans.size()<<'\n';
    for(auto x:ans)cout<<x<<" ";
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