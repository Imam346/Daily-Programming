/*----------------------------------------
    author:  Imam
    created: 25.03.2025 16:18:45
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar1(n),ar2(n);
    for(int &i:ar1) cin>>i;
    for(int &i:ar2) cin>>i;

    unordered_map<int,int>ump1,ump2;
    for(int i=0;i<n;i++){
        int x = ar1[i], cnt=0;
        while(i<n && ar1[i]==x){cnt++;i++;}
        ump1[x] = max(ump1[x],cnt);
        --i;
    }
    for(int i=0;i<n;i++){
        int x = ar2[i], cnt=0;
        while(i<n && ar2[i]==x){cnt++;i++;}
        ump2[x] = max(ump2[x],cnt);
        --i;
    }

    for(auto [x,y]:ump2){
        if(ump1[x]){ump1[x]+=y;}
        else {ump1[x]=y;}
    }

    int ans=INT_MIN;
    for(auto [x,y]:ump1){ans=max(ans,y);}
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