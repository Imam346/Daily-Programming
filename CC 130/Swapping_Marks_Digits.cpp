#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int tmp1=a,tmp2=b;
        int rev1=0,rev2=0;
        while(tmp1!=0)
        {
            int rem = tmp1%10;
            rev1 = rev1*10 + rem;
            tmp1 = tmp1/10;
        }
        // cout<<rev1;
        while(tmp2!=0)
        {
            int rem = tmp2%10;
            rev2 = rev2*10 + rem;
            tmp2 = tmp2/10;
        }
        // cout<<rev2;
        if(a>b) cout<<"Yes"<<'\n';
        else if(rev1 > b) cout<<"Yes"<<'\n';
        else if(a > rev2) cout<<"Yes"<<'\n';
        else if(rev1 > rev2) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}