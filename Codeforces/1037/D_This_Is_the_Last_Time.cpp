/*----------------------------------------
    author:  Imam
    created: 17.07.2025 22:14:42
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
using Pair=pair<ll,pair<ll,ll>>;
inline void solve()
{
    ll n,k; cin>>n>>k;
    vector<Pair> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i].first;
        cin>>ar[i].second.first;
        cin>>ar[i].second.second;
    }
    sort(ar.begin(),ar.end());
    
    ll ans=k,i=0;
    priority_queue<ll> pq;
    while(true){
        while(i<n && ar[i].first<=ans){
            ll r=ar[i].second.first;
            ll real=ar[i].second.second;
            // cout<<r<<" "<<real<<endl;
            pq.push(real);
            i++;
        }
        if(pq.empty()){break;}
        ll beshi=pq.top();
        pq.pop();
        if(beshi<=ans){break;}
        else ans=beshi;
        // cout<<ans<<endl;
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