#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    int n; cin>>n;
    pair<int,int>p;
    p.first=INT_MAX;
    p.second=INT_MAX;
    int mn = INT_MAX;
    vector<int>vec;
    while(n--){
        int m; cin>>m;
        vector<int> ar(m);
        for(auto &i:ar) cin>>i;
        sort(ar.begin(),ar.end());
        mn=min(mn,ar[0]);
        if(ar[1]<p.second){
            p.first=ar[0];
            p.second=ar[1];
        }
        vec.push_back(ar[1]);
    }
    ll sum=accumulate(vec.begin(),vec.end(),0LL);
    sum-=p.second;
    sum+=mn;
    cout<<sum<<'\n';
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}