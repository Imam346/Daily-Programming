/*----------------------------------------
    author:  Imam
    created: 04.09.2025 19:49:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline string decimal_binary(int n){
    string s="";
    while(n){
        if(n&1)s+='1';
        else s+='0';
        n>>=1;
    }
    reverse(s.begin(),s.end());
    return s;
}
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    map<int,int>mp;
    int64_t ans=0;
    for(int i=0;i<n;i++){
        string b = decimal_binary(ar[i]);
        if(mp[(int)b.size()])ans+=mp[(int)b.size()];
        mp[(int)b.size()]++;
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