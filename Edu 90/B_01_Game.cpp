//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int a = count(s.begin(),s.end(),'1');
        int b = count(s.begin(),s.end(),'0');
        cout<<(min(a,b)%2?"DA\n":"NET\n");
    }
    return 0;
}