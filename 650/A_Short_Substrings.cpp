//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string ans="";
        ans += s[0], ans+=s[1];
        for(int i=2;i<s.size();i++){
            if(i%2) ans += s[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}