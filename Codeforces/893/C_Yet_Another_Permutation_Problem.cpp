/*----------------------------------------
    author:  Imam
    created: 24.06.2025 15:57:24
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    bool ok[n+1]={0};
    vector<int> vec;
    vec.push_back(1);
    for(int i=2;i<=n;i++){
        if(ok[i]){continue;}
        int j=i;
        while(j<=n){
            vec.push_back(j);
            ok[j]=true;
            j*=2;
        }
    }

    for(auto val:vec) cout<<val<<" ";
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