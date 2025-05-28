/*----------------------------------------
    author:  Imam
    created: 06.03.2025 12:46:44
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int i=1;
        while(n%i==0){i++;}
        cout<<i-1<<'\n';
    }
    return 0;
}