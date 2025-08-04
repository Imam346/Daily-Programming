/*----------------------------------------
    author:  Imam
    created: 01.02.2025 12:26:58
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
        set<int> s;
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            s.insert(x);
        }
        cout<<n-s.size()<<'\n';
    }
    return 0;
}