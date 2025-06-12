#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int32_t main()
{
    Code By Imam
    string s; cin>>s;
    sort(s.rbegin(),s.rend());

    string ans="";
    ans +=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[0]==s[i]) ans += s[i];
        else break;
    }
    cout<<ans<<endl;
    return 0;
}