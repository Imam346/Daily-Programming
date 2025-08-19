/*----------------------------------------
    author:  Imam
    created: 19.08.2025 23:35:08
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    set<int> st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.insert(x);
        mp[x]++;
    }
    int mex=0; // 0 1 2 3 4 ...
    for(auto x:st){
        if(x==mex)mex++;
        else break;
    }
    map<int,int>freq;
    for(auto &[x,y]:mp){
        if(x<mex) freq[y]++;
    }

    vector<int> ar(n+1,0);
    ar[0]=ar[n]=1;
    // suffix
    for(int i=n-1;i>n-mex;i--){
        ar[i]=ar[i+1]+1;
    }
    // prefix
    for(int i=1;i<n;i++){
        if(ar[i])break; // don't overwrite suffix
        ar[i]=ar[i-1]+freq[i];
    }

    for(auto x:ar) cout<<x<<" ";
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
