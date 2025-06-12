/*----------------------------------------
    author:  Imam
    created: 22.01.2025 18:21:18
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l==1 && r==1){cout<<1<<'\n';continue;}
        cout<<r-l<<'\n';
    }
    return 0;
}