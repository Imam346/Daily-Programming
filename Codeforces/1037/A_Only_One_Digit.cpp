/*----------------------------------------
    author:  Imam
    created: 17.07.2025 20:36:43
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    int mn=INT_MAX;
    while(n){
        mn=min(mn,n%10);
        n/=10;
    }
    cout<<mn<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}