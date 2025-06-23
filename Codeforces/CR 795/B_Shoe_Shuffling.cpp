/*----------------------------------------
    author:  Imam
    created: 19.06.2025 15:59:43
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }

    for(auto [x,y]:mp){if(y==1){cout<<-1<<'\n';return;}}
    vector<int> ans;
    for(int i=0;i<n;i++){
        int tmp=ar[i],l=i;
        while(i<n && ar[i]==tmp)i++;
        ans.push_back(i);
        ans.push_back(l+1);
        for(int j=l+2;j<i;j++) ans.push_back(j);
        i--;
    }
    for(auto val:ans) cout<<val<<" ";
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