/*----------------------------------------
    author:  Imam
    created: 23.04.2025 16:34:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    if(n==1 || (ar[0]%ar[n-1])==0){cout<<-1<<'\n';return;}
    vector<int> br,cr;
    for(auto val:ar){
        if(val==ar[n-1]) br.push_back(val);
        else cr.push_back(val);
    }
    cout<<cr.size()<<" "<<br.size()<<'\n';
    for(auto val:cr) cout<<val<<" ";
    cout<<'\n';
    for(auto val:br) cout<<val<<" ";
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