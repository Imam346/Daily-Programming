/*----------------------------------------
    author:  Imam
    created: 02.02.2025 18:40:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());

    int ans=0,k=1;
    for(int i=0;i<n;i++){
        if(ar[i]>=k){
            ans++;
            k++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}