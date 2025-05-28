/*----------------------------------------
    author:  Imam
    created: 05.02.2025 23:26:31
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int ar[3];
    for(auto &i:ar) cin>>i;
    sort(ar,ar+3);
    if(ar[1]!=ar[2]){cout<<"NO\n";}
    else{cout<<"YES\n"<<ar[2]<<" "<<ar[0]<<" "<<ar[0]<<'\n';}
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int t; cin>>t;
    while(t--) solve();
    return 0;
}