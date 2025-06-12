#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline void solve()
{
    int x,y,k;
    cin>>x>>y>>k;

    if(k%2!=0)
        cout<<x<<" "<<y<<endl;
    for(int i=1;i<=k/2;i++)
    {
        cout<<x+i<<" "<<y+i<<endl;
        cout<<x-i<<" "<<y-i<<endl;
    }
}
int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}