/*----------------------------------------
    author:  Imam
    created: 28.04.2025 09:23:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

inline void solve(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.rbegin(),ar.rend());
    int mn = ar[0],mx = ar[n-1];
    if(mn!=mx){ 
        cout<<"YES"<<'\n';
        int i=1,j=n-1;
        while(i<j){
            if(ar[i-1]==ar[i]){
                swap(ar[i],ar[j]);
            }
            i++,j--;
        }
        for(auto val:ar) cout<<val<<" ";
        cout<<'\n';
    }
    else cout<<"NO"<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while (t--)solve();
    
    return 0;
}