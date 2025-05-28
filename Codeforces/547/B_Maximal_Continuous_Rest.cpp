/*----------------------------------------
    author:  Imam
    created: 01.12.2024 01:07:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin>>n;
    vector<int> ar(n);
    for(int &val:ar) cin>>val;

    int i=0,cnt1=0;
    while(i<n && ar[i]==1){i++;cnt1++;}
    reverse(ar.begin(),ar.end());
    i=0;
    while(i<n && ar[i]==1){i++;cnt1++;}
    
    int cnt2=0,tmp=0;
    for(int i=0;i<n;i++){
        tmp=0;
        while(i<n && ar[i]==1){i++;tmp++;}
        cnt2 = max(cnt2,tmp);
    }

    cout<<max(cnt1,cnt2)<<'\n';
    return 0;
}