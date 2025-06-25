/*----------------------------------------
    author:  Imam
    created: 23.06.2025 21:02:50
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline bool fun(vector<int>&vec){
    for(int i=0;i<(int)vec.size()-1;i++){
        if(abs(vec[i]-vec[i+1])<=1){
            return true;
        }
    }
    return false;
}
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i!=0){
            if(abs(ar[i]-ar[i-1])<=1) flag=true;
        }
    }
    if(flag){cout<<0<<'\n'; return;}

    for(int i=0;i<n-1;i++){
        int mn=min(ar[i],ar[i+1]);
        int mx=max(ar[i],ar[i+1]);
        if(i!=0){
            int mn2=ar[i-1]-1;
            int mx2=ar[i-1]+1;
            if(max(mn,mn2)<=min(mx,mx2)){
                flag=true;
                break;
            }
        }
        if(i+2<n){
            int mn2=ar[i+2]-1;
            int mx2=ar[i+2]+1;
            if(max(mn,mn2)<=min(mx,mx2)){
                flag=true;
                break;
            }
        }
    }
    cout<<(flag?1:-1)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}