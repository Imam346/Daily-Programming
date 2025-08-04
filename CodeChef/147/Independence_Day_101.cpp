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
        int a,b,c;
        cin>>a>>b>>c;
        int max_val = max({a,b,c});
        int sum = a+b+c;
        if(max_val<=(sum-max_val)+1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}