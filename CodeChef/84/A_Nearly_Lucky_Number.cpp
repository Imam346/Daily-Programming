#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    ll n; cin>>n;
    string s = to_string(n);
    int cnt=0;
    for(auto c:s)
    {
        if(c=='4' or c=='7')
            cnt++;
    }
    if(cnt==4 or cnt==7)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}