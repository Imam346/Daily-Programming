/*----------------------------------------
    author:  Imam
    created: 02.01.2025 21:32:29
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
        for(int &i:ar) cin>>i;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((i+1)!=j && ar[i]==ar[j]){
                    flag=true;
                    break;
                }
            }
            if(flag){break;}
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}