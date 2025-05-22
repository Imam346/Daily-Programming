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
        int x,y,k;
        cin>>x>>y>>k;
        //get ceil value
        int A = (x+k-1)/k;
        int B = (y+k-1)/k;

        if(A<=B) cout<<(2*B)<<'\n';
        else cout<<(2*A)-1<<'\n';
    }
    return 0;
}