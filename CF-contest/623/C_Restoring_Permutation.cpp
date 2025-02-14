/*----------------------------------------
    author:  Imam
    created: 13.02.2025 07:26:53
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int>ar(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }

    vector<int>vec;
    for(int i=1;i<=(2*n);i++){
        if(!mp.count(i)){
            vec.push_back(i);
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        auto it = upper_bound(vec.begin(),vec.end(),ar[i]);
        if(it==vec.end()){cout<<-1<<'\n';return;}
        ans.push_back(ar[i]);
        ans.push_back(*it);
        vec.erase(it);
    }
    for(auto &val:ans) cout<<val<<" ";
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