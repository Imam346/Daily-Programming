#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        int n = s.size();
        int ok  = 0;
        for(int i=0;i<n;)
        {
            if(s[i]=='1')
            {
                cnt++;
                while(i<n &&s[i]=='1') i++;
            }
            else if(s[i]=='0' && ok ==0)
            {
                cnt++;
                ok  =1;
                while(i<n && s[i]=='0') i++;
                while(i<n && s[i]=='1') i++;
            }
            else 
            {
                cnt++;
                while(i<n && s[i]=='0') i++;
            }
        }
        cout<<cnt<<'\n';

    }
    return 0;
}