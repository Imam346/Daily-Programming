/*----------------------------------------
    author:  Imam
    created: 24.05.2025 20:40:11
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    sort(ar.begin(),ar.end());
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(((ar[i]+ar[n-1])&1)==0){break;}
        a++;
    }
    for(int i=n-1;i>=0;i--){
        if(((ar[i]+ar[0])&1)==0){break;}
        b++;
    }
    cout<<min(a,b)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}