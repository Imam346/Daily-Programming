//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        ll even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i%2==0) even += ar[i];
            else odd += ar[i];
        }
        if(even>odd)
            for(int i=1;i<n;i+=2) ar[i]=1;
        else for(int i=0;i<n;i+=2) ar[i]=1;

        for(int &val:ar) cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}