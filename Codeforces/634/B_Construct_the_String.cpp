/*----------------------------------------
    author:  Imam
    created: 21.11.2024 21:35:59
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
        int n,a,b;
        cin>>n>>a>>b;
        string s="";
        for(int i=0;i<b;i++){
            char c = (i+'a');
            s += c;
        }
        for(int i=b;i<a;i++)
            s += s[b-1];
        int k=0;
        for(int i=a;i<n;i++){
            s += s[k];
            k++;
        }
        cout<<s<<'\n';
    }
    return 0;
}