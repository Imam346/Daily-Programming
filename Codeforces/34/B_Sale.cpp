/*----------------------------------------
    author:  Imam
    created: 01.01.2025 21:30:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x<0){ar.push_back(x);}
    }
    sort(ar.begin(),ar.end());
    int ans=0;
    for(int i=0;i<min(m,int(ar.size()));i++) ans+=abs(ar[i]);
    cout<<ans<<'\n';
    return 0;
}