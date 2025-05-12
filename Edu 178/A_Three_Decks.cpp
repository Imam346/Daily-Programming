/*----------------------------------------
    author:  Imam
    created: 28.04.2025 20:44:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long x = a+b+c;
    x/=3;
    int tmp=0;
    if(c>x){
        tmp=c-x;
        c=x;
    }
    if(b<x){
        int need = x-b;
        if(tmp>=need){
            b+=need;
            tmp-=need;
        }
    }
    a+=tmp;
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if(a==b && b==c){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}