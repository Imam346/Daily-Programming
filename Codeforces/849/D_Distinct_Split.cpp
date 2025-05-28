/*----------------------------------------
    author:  Imam
    created: 06.04.2025 15:14:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n; 
    string s; cin>>s;
    vector<ll> pref(n),suf(n);
    unordered_set<char> seen;
    for(int i=0;i<n;i++){
        seen.insert(s[i]);
        pref[i]=seen.size();
    }

    seen.clear();
    for(int i=n-1;i>=0;i--){
        seen.insert(s[i]);
        suf[i]=seen.size();
    }

    ll ans=0;
    for(int i=0;i<n-1;i++){
        ans = max(ans,pref[i]+suf[i+1]);
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