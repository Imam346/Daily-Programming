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
        int n,m;
        cin>>n>>m;
        if(n>m)
            cout<<(m*2)+1<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}