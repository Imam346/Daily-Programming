/*----------------------------------------
    author:  Imam
    created: 28.07.2025 11:56:47
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,c; cin>>n>>c;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    sort(ar.begin(),ar.end());
    int ans=0;
    vector<ll> tmp(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        vector<ll> vec;
        for(auto v:tmp){
            if(v!=-1)vec.push_back(v);
        }
        int idx=-1;
        for(int j=0;j<(int)vec.size();j++){
            if(vec[j]<=c)idx=j;
            else{break;}
        }
        if(idx==-1){
            ans+=(int)vec.size();
            break;
        }
        else{vec[idx]=-1;}
        tmp.clear();
        for(auto v:vec){
            if(v!=-1){
                tmp.push_back(2*v);
            }
        }
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