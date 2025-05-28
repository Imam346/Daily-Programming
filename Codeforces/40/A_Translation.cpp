#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    string s,t;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(s==t) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}