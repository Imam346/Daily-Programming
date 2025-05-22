/*----------------------------------------
    author:  Imam
    created: 06.01.2025 22:48:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int k = 31 - __builtin_clz(l^r);
        int a = l | ((1<<k)-1), b=a+1, c=(a==l?r:l);
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}