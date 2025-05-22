/*----------------------------------------
    author:  Imam
    created: 24.02.2025 23:46:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int>ar(n);
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i!=0 && ar[i-1]>ar[i]){flag=false;}
    }
    if(!flag){cout<<0<<'\n';return;}
    int mn=INT_MAX;
    for(int i=0;i<n-1;i++){
        mn = min(mn, ar[i+1] - ar[i]);
    }
    cout<<(mn/2)+1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}