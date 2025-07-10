/*----------------------------------------
    author:  Imam
    created: 02.07.2025 16:34:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int pref_min[n], suff_max[n];
    pref_min[0]=ar[0];
    for(int i=1;i<n;i++){
        pref_min[i]=min(pref_min[i-1],ar[i]);
    }
    suff_max[n-1]=ar[n-1];
    for(int i=n-2;i>=0;i--){
        suff_max[i]=max(suff_max[i+1],ar[i]);
    }

    for(int i=0;i<n;i++){
        if(ar[i]>pref_min[i] && ar[i]<suff_max[i]) cout<<0;
        else cout<<1;
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
/*
Break down the input and output below, and you will understand the pattern of this problem
5
5 1 2 4 3
11011
*/