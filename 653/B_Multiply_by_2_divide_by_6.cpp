//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        int cnt=0;
        if(n%6==0){n=n/6;cnt++;}
        bool flag=true;
        while(n>1){
            if((n%6)!=0){n=n*2;cnt++;}
            if((n%6)==0){n=n/6;cnt++;}
            else {flag=false;break;}
        }
        if(flag && n==1) cout<<cnt<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}