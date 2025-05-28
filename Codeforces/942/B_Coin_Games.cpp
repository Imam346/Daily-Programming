#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int cnt=0;
        for(char c:s)
        {
            if(c=='U')cnt++;
        }

        if(cnt%2!=0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}