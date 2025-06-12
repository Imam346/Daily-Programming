/*----------------------------------------
    author:  Imam
    created: 08.06.2025 21:24:37
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
    vector<int> v1(n+1,n),v2(n+1,n);
    for(int i=n-1;i>=0;i--){
        v1[i]=v2[ar[i]];
        v2[ar[i]]=i;
    }
    int cur=0, ans=0;
    int max_reach=0;
    while(true){
        int x=0;
        for (int i=cur;i<=max_reach;i++) 
            x = max(x, v1[i]);
        ans++;
        if(x>=n){break;}
        cur=max_reach+1;
        max_reach=x;
    }
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}