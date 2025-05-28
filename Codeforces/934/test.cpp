//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> v;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        v ar(n);
        unordered_map<int,int> freq;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            freq[ar[i]]++;
            s.insert(ar[i]);
        }

        v unique_ar(s.begin(),s.end());
        v c;
        for(int i=0;i<unique_ar.size();i+=2){
            c.pb(unique_ar[i]);
            // cout<<unique_ar[i]<<" ";
        }
        for(int i=1;i<unique_ar.size();i+=2){
            int x = unique_ar[i];
            if(freq[x]>=2){c.pb(x);}
            // cout<<freq[x]<<" ";
        }

        sort(c.begin(),c.end());
        // for(auto x:c) cout<<x<<" ";
        bool flag=false;
        for(int i=0;i<c.size();i++){
            if(c[i]!=i) {cout<<i<<endl; flag=true; break;}
        }
        if(!flag) {cout<<c.size()<<endl;}
    }
    return 0;
}