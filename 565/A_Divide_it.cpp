//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        int cnt=0;
        bool flag=true;
        while(n!=1)
        {
            bool tmp=false;
            if(n%2==0) {n=n/2;cnt++;tmp=true;}
            if((2*n)%3==0) {n=(2*n)/3;cnt++;tmp=true;}
            if((4*n)%5==0) {n=(4*n)/5;cnt++;tmp=true;}
            if(!tmp){flag=false;break;}
        }
        if(flag) cout<<cnt<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}