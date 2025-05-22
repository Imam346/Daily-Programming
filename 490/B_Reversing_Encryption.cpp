/*----------------------------------------
    author:  Imam
    created: 04.12.2024 21:15:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(n%(i+1)==0){
            reverse(s.begin(),s.begin()+(i+1));
        }
    }
    cout<<s<<'\n';
    return 0;
}