//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int cnt=0;
    for(char &c:s){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cnt++;
        if(c=='1' || c=='3' || c=='5' || c=='7' || c=='9') cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}