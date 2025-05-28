//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k; cin>>n>>k;
    long long x = n/k;
    cout<<(x%2?"YES\n":"NO\n");
    return 0;
}