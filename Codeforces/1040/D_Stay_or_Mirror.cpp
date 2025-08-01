/*----------------------------------------
    author:  Imam
    created: 01.08.2025 15:20:23
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> pr(n);
    for(auto &i:pr) cin>>i;

    long ans=0;
    for(int i=0;i<n;i++){
        // count large element on the left
        long L=0;
        for(int j=0;j<i;j++){
            if(pr[j]>pr[i])L++;
        }
        // count large element on the right
        long R=0;
        for(int j=i+1;j<n;j++){
            if(pr[j]>pr[i])R++;
        }

        if(L<=R)ans+=L;
        else ans+=R;
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