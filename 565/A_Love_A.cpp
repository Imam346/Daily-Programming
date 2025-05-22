//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cnt=0;
    for(char &c:s) {if(c=='a') cnt++;}
    cout<<min((int)s.size(),(2*cnt)-1)<<endl;
    return 0;
}