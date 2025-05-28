//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    int i=n-1,j=m-1;
    // cout<<n<<" "<<m<<endl;
    // cout<<i<<" "<<j<<endl;
    int cnt=0;
    while(n && m && i!=-1 && j!=-1){
        if(s[i]==t[j]) cnt++;
        else break;
        i--,j--;
    }
    cout<<(n+m)-(2*cnt)<<endl;
    return 0;
}