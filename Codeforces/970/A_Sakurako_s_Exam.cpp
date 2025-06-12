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
        int a,b;
        cin>>a>>b;

        if(a%2!=0) cout<<"NO\n";
        else if(a==0 && b%2!=0) cout<<"NO\n";
        else if(a==0 && b%2==0) cout<<"YES\n";
        else if(a%2==0 && b==0) cout<<"YES\n";
        else if(a%2==0 && b%2==0) cout<<"YES\n";
        else if(a%2==0 && b%2!=0) cout<<"YES\n";
    }
    return 0;
}