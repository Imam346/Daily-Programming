/*----------------------------------------
    author:  Imam
    created: 29.01.2025 21:24:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>ar(n);
        for(auto &i:ar) cin>>i;
        ll ans=0;
        for(int i=1;i<n;i++){
            ar[i]+=ans;
            if(ar[i]<ar[i-1]){
                ans += (ar[i-1]-ar[i]);
                ar[i] += (ar[i-1]-ar[i]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}