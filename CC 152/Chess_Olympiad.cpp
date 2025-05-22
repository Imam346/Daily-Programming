#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int x,y,z;
    cin>>x>>y>>z;
    float win=0, opo=0;
    if(y!=0)
    {
        float draw = y*(0.5);
        win += (x+draw);
        opo += (z+draw);
    }
    else
    {
        win += x;
        opo += z;
    }
    float m = win+opo;
    float addition = 4-m;
    if((win+addition)>opo) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}