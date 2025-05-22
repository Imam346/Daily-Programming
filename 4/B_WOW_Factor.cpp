//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s; cin>>s;
    ll after=0, o=0, before=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o') o += after;
        else if(i>0 && s[i-1]=='v'){
            after++;
            before += o;
        }
    }
    cout<<before<<endl;
    return 0;
}