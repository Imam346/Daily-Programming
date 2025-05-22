/*----------------------------------------
    author:  Imam
    created: 24.11.2024 15:50:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        h++;
        int ans = (24-h)*60 + (60-m);
        cout<<ans<<'\n';
    }
    return 0;
}