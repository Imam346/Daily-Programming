/*----------------------------------------
    author:  Imam
    created: 02.01.2025 23:49:09
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        bool flag1=false;
        bool flag2=false;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%2==0){flag1=true;}
            if(ar[i]%2!=0){flag2=true;}
        }
        if(flag1 && flag2) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}