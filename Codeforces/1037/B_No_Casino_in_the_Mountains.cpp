/*----------------------------------------
    author:  Imam
    created: 17.07.2025 20:43:52
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int ans=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            int j=i,cnt=0;
            while(j<n && ar[j]==0){
                cnt++;j++;
                if(cnt==k){ans++;break;}
            }
            i=j;
        }
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