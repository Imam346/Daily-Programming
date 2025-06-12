/*----------------------------------------
    author:  Imam
    created: 02.06.2025 16:07:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll> ar(n);
    ar[0] = b*k;
    s-=(b*k);
    if(s<0){cout<<-1<<'\n';return;}
    for(int i=0;i<n;i++){
        if(i==0){
            ar[i]+=min(s,k-1);
            s-=min(s,k-1);
            continue;
        }
        ar[i] = min(s,k-1);
        s-=ar[i];
    }
    if(s){cout<<-1<<'\n';return;}
    for(auto val:ar) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}