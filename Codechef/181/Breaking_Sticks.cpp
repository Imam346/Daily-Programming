/*----------------------------------------
    author:  Imam
    created: 09.04.2025 20:42:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            ans+=x-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}