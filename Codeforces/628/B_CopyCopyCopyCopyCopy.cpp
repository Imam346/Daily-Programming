//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;
        set<int> s(ar.begin(),ar.end());
        cout<<s.size()<<endl;
    }
    return 0;
}