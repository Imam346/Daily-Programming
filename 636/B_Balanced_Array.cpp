//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> even,odd;
        int val=1;
        for(int i=1;i<=n/2;i++){
            odd.push_back(val);
            val+=2;
        }
        val=2;
        for(int i=1;i<=n/2;i++){
            even.push_back(val);
            val+=2;
        }
        ll sum1 = accumulate(even.begin(),even.end(),0LL);
        ll sum2 = accumulate(odd.begin(),odd.end(),0LL);
        
        if(sum2%2) {cout<<"NO\n";continue;}
        int diff = sum1-sum2;
        odd[odd.size()-1]=odd[odd.size()-1]+diff;
        cout<<"YES\n";
        for(auto &x:even) cout<<x<<" ";
        for(auto &x:odd) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}