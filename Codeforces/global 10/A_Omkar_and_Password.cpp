/*----------------------------------------
    author:  Imam
    created: 31.01.2025 23:02:31
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
        sort(ar.begin(),ar.end());
        if(ar[0]==ar[n-1]) cout<<n<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}