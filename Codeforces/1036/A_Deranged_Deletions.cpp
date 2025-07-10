/*----------------------------------------
    author:  Imam
    created: 06.07.2025 20:57:27
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n),ar2(n);
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar2[i]=ar[i];
        if(i!=0){
            if(ar[i]<ar[i-1])flag=true;
        }
    }
    
    if(n==1 || !flag){cout<<"NO\n";return;}
    vector<int> vec;
    sort(ar2.begin(),ar2.end());
    for(int i=0;i<n;i++){
        if(ar[i]!=ar2[i]){
            vec.push_back(ar[i]);
        }
    }

    cout<<"YES\n";
    cout<<vec.size()<<'\n';
    for(auto val:vec) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}