//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> vec;
    char c;
    while(cin>>c){if(c>='0' && c<='9')vec.push_back(c);}
    sort(vec.begin(),vec.end());

    int n = vec.size();
    bool flag=true;
    vector<char> ans;
    for(int i=0;i<n; )
    {
        if(flag){ans.push_back(vec[i]);i++; flag=false;}
        else {ans.push_back('+');flag=true;}
    }

    for(auto &x:ans) cout<<x;
    return 0;
}