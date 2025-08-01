/*----------------------------------------
    author:  Imam
    created: 17.07.2025 21:13:20
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    int n,k; cin>>n>>k;
    set<ll> st;
    ll cur;
    for(int i=1;i<=n;i++){
        ll x; cin>>x;
        st.insert(x);
        if(i==k){cur=x;}
    }

    if(cur==*st.rbegin()){
        cout<<"YES\n";
        return;
    }
    vector<ll> ar(st.begin(),st.end());
    int idx=lower_bound(ar.begin(),ar.end(),cur)-ar.begin();
    bool flag=true;
    for(int i=idx;i<ar.size()-1;i++){
        if((ar[i+1]-ar[i])>cur){
            flag=false;
            break;
        }
    }
    cout<<(flag?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}