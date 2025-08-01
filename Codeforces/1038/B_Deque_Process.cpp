/*----------------------------------------
    author:  Imam
    created: 28.07.2025 17:32:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    string ans="";
    int i=0,j=n-1;
    bool flag=true;
    while(i<j){
        if(flag){
            if(ar[i]<ar[j])ans+="RL";
            else ans+="LR";
        }
        else{
            if(ar[i]<ar[j])ans+="LR";
            else ans+="RL";
        }
        i++,j--;
        flag=!flag;
    }
    if(n&1)ans+='L';

    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}