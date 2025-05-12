/*----------------------------------------
    author:  Imam
    created: 05.05.2025 20:39:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        set<int> s;
        bool even=false,odd=false;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
            if(ar[i]&1){odd=true;}
            else {even=true;}
        }
        if(s.size()==1){cout<<"No\n";continue;}
        int mx = *max_element(ar.begin(),ar.end());
        cout<<"Yes\n";
        if(even && odd){
            for(int i=0;i<n;i++){
                if(ar[i]&1)cout<<1<<" ";
                else cout<<2<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<(ar[i]==mx?2:1)<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}