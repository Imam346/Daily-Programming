//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    for(auto it:v) cout<<it.second<<" ";
    return 0;
}