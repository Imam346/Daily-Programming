/*----------------------------------------
    author:  Imam
    created: 30.11.2024 22:49:02
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

inline void solve()
{
    int n; cin>>n;
    multiset<int> ms;
    int even_cnt=0,odd_cnt=0;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        ms.insert(x);
        if(x&1)odd_cnt++;
        else even_cnt++;
    }
    
    if((even_cnt&1)==0 && (odd_cnt&1)==0){
        cout<<"YES\n";
        return;
    }
    bool flag=false;
    for(int val:ms){
        if(ms.count(val+1)){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}