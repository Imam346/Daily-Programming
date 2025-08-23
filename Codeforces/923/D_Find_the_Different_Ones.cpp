/*----------------------------------------
    author:  Imam
    created: 03.08.2025 10:15:49
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(j<n && ar[j]==ar[i])j++;
        j--;
        if(i==j)vec.push_back({i,ar[i]});
        else{
            vec.push_back({i,ar[i]});
            vec.push_back({j,ar[j]});
        }
        i=j;
    }

    // for(auto [x,y]:vec)cout<<x<<" ";
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        l--,r--;
        auto idx = lower_bound(vec.begin(),vec.end(),make_pair(l,INT_MIN))-vec.begin();
        // cout<<idx<<"\n";
        pair<int,int>p={-1,-1};
        for(int i=idx+1;i<vec.size();i++){ // maximum iteration will be 3 times
            if(vec[i].first>r){break;}
            if(vec[i].second!=vec[idx].second){
                p.first=vec[idx].first+1;
                p.second=vec[i].first+1;
                break;
            }
        }
        cout<<p.first<<" "<<p.second<<"\n";
    }
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