/*----------------------------------------
    author:  Imam
    created: 19.01.2025 19:37:56
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    n=2*n;
    int ar[n];
    for(int &i:ar) cin>>i;
    sort(ar,ar+n);
    cout<<abs(ar[n/2]-ar[(n/2)-1])<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){solve();}
    return 0;
}