/*----------------------------------------
    author:  Imam
    created: 04.01.2025 00:05:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> v;
    string s; 
    while(cin>>s) v.push_back(s);

    bool flag=true;
    for(int i=0;i<int(v.size());i++){
        if((i+1)<v.size() && v[i]!=v[i+1]){
            for(int j=1;j<v[i].size();j++){
                if(v[i][j]!=v[i][0]){
                    flag=false;
                    break;
                }
            }
        }
        else if((i+1)==v.size()){
            for(int j=1;j<v[i].size();j++){
                if(v[i][j]!=v[i][0]){
                    flag=false;
                    break;
                }
            }
        }
        else{flag=false;break;}
        if(!flag){break;}
    }

    cout<<(flag?"YES\n":"NO\n");
    return 0;
}