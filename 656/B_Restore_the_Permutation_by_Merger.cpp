//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar((2*n)+1);
        for(int i=1;i<=(2*n);i++) cin>>ar[i];
        
        vector<bool> freq(n+1,false);
        vector<int> ans;
        for(int i=1;i<=(2*n);i++){
            int x = ar[i];
            if(!freq[x]){
                ans.push_back(x);
                freq[x]=true;
            }
        }
        for(auto &x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}