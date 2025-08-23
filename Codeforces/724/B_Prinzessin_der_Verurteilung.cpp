/*----------------------------------------
    author:  Imam
    created: 16.08.2025 14:45:26
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
string str;
inline void num_to_str(int n){
    if(n){
        num_to_str((n-1)/26);
        str+=(97+(n-1)%26);
    }
    else {return;}
}
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int num=1;
    while(true){
        str="";
        num_to_str(num);
        int pos = s.find(str);
        if(pos==-1){
            cout<<str<<'\n';
            return;
        }
        num++;
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}