//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n = s.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='A'){
                    for(int k=n-1;k>j;k--){
                        if(s[k]=='Q') cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}