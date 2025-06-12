/*----------------------------------------
    author:  Imam
    created: 26.05.2025 23:18:52
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    set<int> s;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        s.insert(x);
    }
    vector<int> vec(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<int(vec.size());i++){
        ans++;
        if(vec[i]+1==vec[i+1])i++;
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