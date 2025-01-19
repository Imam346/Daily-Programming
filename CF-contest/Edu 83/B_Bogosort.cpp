/*----------------------------------------
    author:  Imam
    created: 13.01.2025 13:12:16
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;
        sort(ar.rbegin(),ar.rend());
        for(auto &val:ar) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}