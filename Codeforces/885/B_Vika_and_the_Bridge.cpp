/*----------------------------------------
    author:  Imam
    created: 14.05.2025 01:15:58
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    unordered_map<int,vector<int>>mp;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        mp[x].push_back(i);
    }
    
    int ans=INT_MAX;
    for(auto &[color,pos]:mp){
        vector<int> gaps;
        //Initial gap from start to first occurrence
        gaps.push_back(pos[0]-1);

        //Internal gaps between positions
        for(int i=1;i<int(pos.size());i++){
            gaps.push_back(pos[i]-pos[i-1]-1);
        }

        //final gap from last occurrence to end
        gaps.push_back(n-pos.back());

        //Find the largest gap
        sort(gaps.rbegin(),gaps.rend());
        int a=gaps[0];
        int b=(gaps.size()>1?gaps[1]:0);
        int mx = max(a/2,b);
        ans = min(ans,mx);
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