/*----------------------------------------
    author:  Imam
    created: 28.05.2025 12:00:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    int n,x; cin>>n>>x;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    // 1 2 2 3 4 5 6
    ll ans=ar[0];
    bool flag=true;
    for(int i=1;i<n;i++){
        if(ar[i]==ar[i-1]){continue;}
        ll dif = ar[i]-ar[i-1];
        ll need = dif*i;
        if(x>=need){
            ans+=dif;
            x-=need;
        }
        else{
            ans+=(x/i);
            flag=false;
            break;
        }
    }
    if(flag){ans+=(x/n);}
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}