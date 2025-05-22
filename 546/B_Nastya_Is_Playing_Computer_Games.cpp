/*----------------------------------------
    author:  Imam
    created: 14.02.2025 12:27:01
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    if(k==1) cout<<3*n<<'\n';
    else if(n==k) cout<<3*n<<'\n';
    else if(k<=(n/2)) cout<<(3*n)+(k-1)<<'\n';
    else cout<<(3*n)+(n-k)<<'\n';
    return 0;
}