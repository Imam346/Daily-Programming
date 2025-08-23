/*----------------------------------------
    author:  Imam
    created: 14.08.2025 15:13:42
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
inline void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    // 
    if(n==1){cout<<1<<'\n';return;}

    sort(ar.begin(),ar.end());
    vector<vector<int>> vec;
    for(int i=0;i<n-1;i++){
        vector<int> v;
        while(i<n-1 && (ar[i+1]-ar[i])<=x){
            v.push_back(ar[i]);
            i++;
        }
        v.push_back(ar[i]);
        vec.push_back(v);
    }
    if(ar.back()!=vec[vec.size()-1].back()){
        vector<int> v;
        v.push_back(ar[n-1]);
        vec.push_back(v);
    }

    vector<int> v;
    for(int i=0;i<vec.size()-1;i++){
        int a = vec[i].back();
        int b = vec[i+1].front();
        int gap = b-a;
        int need = (gap/x) + (gap%x!=0?1:0) - 1;
        v.push_back(need);
    }
    
    int ans = vec.size();
    sort(v.begin(),v.end());
    for(auto val:v){
        if(val<=k){
            k-=val;
            ans--;
        }
        else {break;}
    }
    cout<<ans<<'\n';
}
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; //cin>>t;
    while(t--) solve();
    return 0;
}