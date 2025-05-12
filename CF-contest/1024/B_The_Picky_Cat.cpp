/*----------------------------------------
    author:  Imam
    created: 12.05.2025 13:20:15
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar[i]=abs(ar[i]);
    }
    int target = ar[0];
    sort(ar.begin(),ar.end());
    int mid = (n+1)/2;
    for(int i=0;i<mid;i++){
        if(ar[i]==target){
            cout<<"YES\n";
            return;
        }
    }
    int cnt=0;
    for(int i=mid;i<n;i++){
        if(ar[i]>=target) cnt++;
    }
    cout<<(cnt>=mid?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}