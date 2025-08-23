/*----------------------------------------
    author:  Imam
    created: 03.08.2025 12:20:29
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,m,k; cin>>n>>m>>k;
    set<int>s1,s2;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(x<=k)s1.insert(x);
    }
    set<int>common;
    for(int i=1;i<=m;i++){
        int x; cin>>x;
        if(x<=k){
            if(s1.find(x)!=s1.end()){
                s1.erase(x);
                common.insert(x);
            }
            else{
                if(!common.count(x))s2.insert(x);
            }
        }
    }

    int sz=s1.size()+s2.size()+common.size();
    // for(auto x:s2)cout<<x<<" ";
    // cout<<endl;
    if(sz<k)cout<<"NO\n";
    else if(s1.size()>k/2)cout<<"NO\n";
    else if(s2.size()>k/2)cout<<"NO\n";
    else cout<<"YES\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}