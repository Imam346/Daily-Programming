#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x,y; cin>>x>>y;

        int cnt=0;
        if(x<=y)
        {
            int Quotient = n/x;
            if(n%x==0) cnt+=Quotient;
            else cnt += (Quotient+1);
        }
        else
        {
            int Quotient = n/y;
            if(n%y==0) cnt += Quotient;
            else cnt += (Quotient+1);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}