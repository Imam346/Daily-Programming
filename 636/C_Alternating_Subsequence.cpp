/*----------------------------------------
    author:  Imam
    created: 13.02.2025 14:56:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void solve()
{
    int n; cin>>n;
    vector<int>ar(n);
    for(auto &i:ar) cin>>i;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            int mx = INT_MIN;
            while(i<n && ar[i]>0){
                mx = max(mx,ar[i]);
                i++;
            }
            sum+=mx;
            i--;
        }
        else{
            int mx = INT_MIN;
            while(i<n && ar[i]<0){
                mx = max(mx,ar[i]);
                i++;
            }
            sum+=mx;
            i--;
        }
    }
    cout<<sum<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}