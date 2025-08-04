/*----------------------------------------
    author:  Imam
    created: 05.04.2025 10:33:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,ar[i]+i/2+(n-i-1)/2);
        }
        cout<<ans<<'\n';
    }
    return 0;
}