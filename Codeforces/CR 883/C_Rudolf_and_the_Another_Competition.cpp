/*----------------------------------------
    author:  Imam
    created: 13.06.2025 22:36:10
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(tuple<ll,ll,ll>& a, tuple<ll,ll,ll>& b){
    //if point of a == b and penalty of a==b then sort according to the index
    if(get<0>(a)==get<0>(b) && get<1>(a)==get<1>(b))
        return get<2>(a) < get<2>(b);
    //elif point of a==b
    if(get<0>(a)==get<0>(b))
        return get<1>(a) < get<1>(b);
    return get<0>(a) > get<0>(b);
}
inline void solve()
{
    ll n,m,h; 
    cin>>n>>m>>h;
    vector<tuple<ll,ll,ll>> vec;
    for(int i=1;i<=n;i++){
        vector<int> ar(m);
        for(auto &i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        ll penalty=0,point=0,cur_time=0,rem_time=h;
        for(int j=0;j<m;j++){
            if(ar[j]<=rem_time){
                point++;
                cur_time+=ar[j];
                penalty+=cur_time;
                rem_time-=ar[j];
            }
            else{break;}
        }
        vec.push_back({point,penalty,i});
    }

    sort(vec.begin(),vec.end(),cmp);
    int ans=1;
    for(auto [x,y,z]:vec){
        if(z==1){break;}
        ans++;
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