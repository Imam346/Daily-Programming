/*----------------------------------------
    author:  Imam
    created: 08.04.2025 14:49:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    unordered_map<int,bool> vis;
    vector<int> ans;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x=br[i];
        if(vis[x]) ans.push_back(cnt);
        else{
            while(!vis[x]){
                cnt++;
                vis[x]=true;
                x=ar[x-1];
            }
            ans.push_back(cnt);
        }
    }
    
    for(auto val:ans) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}