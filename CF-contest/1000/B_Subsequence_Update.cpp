/*----------------------------------------
    author:  Imam
    created: 22.01.2025 18:37:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        vector<int>v1,v2;
        for(int i=0;i<r;i++){v1.push_back(ar[i]);}
        for(int i=l-1;i<n;i++){v2.push_back(ar[i]);}
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int sz = (r-l+1);
        long long mn1=0, mn2=0;
        if(v1.size()>=sz && v2.size()>=sz){
            for(int i=0;i<sz;i++){
                mn1 += v1[i];
                mn2 += v2[i];
            }
            cout<<1LL*(min(mn1,mn2))<<'\n';
        }
        else if(v1.size()<sz){
            for(int i=0;i<sz;i++){
                mn2 += v2[i];
            }
            cout<<mn2<<'\n';
        }
        else{
            for(int i=0;i<sz;i++){
                mn1 += v1[i];
            }
            cout<<mn1<<'\n';
        }
    }
    return 0;
}