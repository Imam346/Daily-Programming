/*----------------------------------------
    author:  Imam
    created: 14.03.2025 15:42:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    vector<int> ar(n);
    ar[n-1]=n-1, ar[n-2]=n;
    for(int i=0;i<n-2;i++){
        if((k&1)==0){ar[i]=n-1;}
        else{ar[i]=n;}
    }
    for(auto val:ar) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}