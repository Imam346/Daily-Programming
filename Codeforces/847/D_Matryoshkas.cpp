/*----------------------------------------
    author:  Imam
    created: 16.06.2025 10:07:03
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    
    multiset<int> ms;
    for(auto val:ar){
        auto it = ms.find(val-1);
        if(it!=ms.end()){
            // that is, It's a part of nesting doll
            ms.erase(it);
            ms.insert(val);
        }
        else{
            // start new set
            ms.insert(val);
        }
    }
    cout<<(int)ms.size()<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}