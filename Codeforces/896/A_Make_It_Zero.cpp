/*----------------------------------------
    author:  Imam
    created: 06.03.2025 12:02:15
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    if((n&1)==0){
        cout<<2<<'\n';
        cout<<1<<" "<<n<<'\n';
        cout<<1<<" "<<n<<'\n';
    }
    else{
        cout<<4<<'\n';
        cout<<1<<" "<<n-1<<'\n';
        cout<<1<<" "<<n-1<<'\n';
        cout<<n-1<<" "<<n<<'\n';
        cout<<n-1<<" "<<n<<'\n';
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}