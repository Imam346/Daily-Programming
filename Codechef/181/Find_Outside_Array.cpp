/*----------------------------------------
    author:  Imam
    created: 09.04.2025 20:50:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    bool zero=false;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]){zero=true;}
    }
    if(!zero){cout<<-1<<'\n';return;}
    sort(ar.begin(),ar.end());
    if(ar[n-1]<=0) cout<<ar[0]<<" "<<ar[0]<<'\n';
    else cout<<ar[n-1]<<" "<<ar[n-1]<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}