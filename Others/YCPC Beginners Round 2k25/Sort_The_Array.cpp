/*----------------------------------------
    author:  Imam
    created: 01.08.2025 20:43:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    bool flag=true;
    for(int i=1;i<n;i++){
        if(ar[i-1]>ar[i]){
            flag=false;
            break;
        }
    }
    if(flag){cout<<0<<'\n';return;}

    // 6
    // 0 0 1 0 1 1
    int i=0;
    while(i<n && ar[i]==0)i++;
    int cnt1=0,cnt2=0;
    for( ;i<n;i++){
        if(ar[i]==0){
            while(i<n && ar[i]==0)i++;
            i--;
            cnt1++;
        }
        else{
            while(i<n && ar[i]==1)i++;
            i--;
            cnt2++;
        }
    }
    cout<<min(cnt1,cnt2)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}