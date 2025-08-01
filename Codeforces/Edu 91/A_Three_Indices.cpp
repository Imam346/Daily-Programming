/*----------------------------------------
    author:  Imam
    created: 14.07.2025 23:16:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;

    bool flag=false;
    int a,b,c;
    for(int i=0;i<n-2;i++){
        if(ar[i]<ar[i+1] && ar[i+1]>ar[i+2]){
            a=i+1,b=i+2,c=i+3;
            flag=true;
            break;
        }
    }
    
    if(!flag){cout<<"NO\n";return;}
    cout<<"YES\n";
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}