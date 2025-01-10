/*----------------------------------------
    author:  Imam
    created: 09.01.2025 15:42:10
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,m,a;
    cin>>n>>m>>a;
    ll x = (n%a)?(n/a)+1:(n/a);
    ll y = (m%a)?(m/a)+1:(m/a);
    cout<<(x*y)<<'\n';
    return 0;
}