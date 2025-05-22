/*----------------------------------------
    author:  Imam
    created: 04.12.2024 12:53:38
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int i=0,j=s.size()-1;
        bool flag=false;
        while(i<j){
            if(s[i]!=s[j]){
                swap(s[i],s[j]);
                flag=true;
                break;
            }
            i++;
        }
        if(flag) cout<<s<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}