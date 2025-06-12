/*----------------------------------------
    author:  Imam
    created: 21.01.2025 12:49:04
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        if(n>14 && n%14>=1 && n%14<=6) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}