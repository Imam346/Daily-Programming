#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    ll n,x;
    cin>>n>>x;

    int cnt=0;
    while(n--)
    {
        char c;
        ll d; 
        cin>>c>>d;
        if(c=='+') x+=d;
        else
        {
            if(x>=d) x-=d;
            else cnt++;
        }
    }
    cout<<x<<" "<<cnt<<endl;
    return 0;
}