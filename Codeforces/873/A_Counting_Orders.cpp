/*----------------------------------------
    author:  Imam
    created: 19.07.2025 23:35:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007LL;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n),br(n);
    for(auto &i:ar) cin>>i;
    for(auto &i:br) cin>>i;

    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());
    long long ans=1;
    for(int i=0;i<n;i++){
        int cnt = lower_bound(br.begin(),br.end(),ar[i])-br.begin();
        long long way=cnt-i;
        if(way==0){ans=0;break;}
        ans=ans*way%MOD;
        // cout<<ans<<" "<<way<<endl;
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