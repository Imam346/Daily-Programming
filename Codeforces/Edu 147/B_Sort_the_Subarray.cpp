/*----------------------------------------
    author:  Imam
    created: 28.07.2025 23:18:42
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(ar[i]!=br[i]){
            r=i;
            if(l==-1)l=i;
        }
    }
    while(l>0 && br[l-1]<=br[l])l--;
    while(r<n-1 && br[r]<=br[r+1])r++;

    cout<<l+1<<" "<<r+1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}