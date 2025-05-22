/*----------------------------------------
    author:  Imam
    created: 19.03.2025 19:06:07
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int> get_height_value_index(vector<pair<int,int>>&v){
    vector<int> idx;
    for(int i=0;i<min(3,int(v.size()));i++){
        idx.push_back(v[i].second);
    }
    return idx;
}
inline void solve()
{
    int n; cin>>n;
    vector<int>a(n),b(n),c(n);
    vector<pair<int,int>> vec1(n),vec2(n),vec3(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        vec1[i]={a[i],i};
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        vec2[i]={b[i],i};
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
        vec3[i]={c[i],i};
    }
    
    sort(vec1.rbegin(),vec1.rend());
    sort(vec2.rbegin(),vec2.rend());
    sort(vec3.rbegin(),vec3.rend());

    //Get top 3 index for each activity
    vector<int> topA = get_height_value_index(vec1);
    vector<int> topB = get_height_value_index(vec2);
    vector<int> topC = get_height_value_index(vec3);

    ll ans = 0;
    for(auto x:topA){
        for(auto y:topB){
            for(auto z:topC){
                if(x!=y && y!=z && z!=x){
                    ll total = (a[x]+b[y]+c[z]);
                    ans = max(ans,total);
                }
            }
        }
    }
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