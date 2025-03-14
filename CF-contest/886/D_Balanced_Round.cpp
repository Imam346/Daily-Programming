/*----------------------------------------
    author:  Imam
    created: 10.03.2025 20:37:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());

    int mx = 0;
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if((ar[i+1]-ar[i])<=k){cnt++;}
        else{
            mx = max(mx,cnt);
            cnt=1;
        }
    }
    mx = max(mx,cnt);
    cout<<n-mx<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}