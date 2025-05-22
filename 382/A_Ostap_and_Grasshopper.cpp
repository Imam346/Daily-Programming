#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,k;
    cin>>n>>k;
    string s; cin>>s;
    int g=-1,t=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
            g = i;
        if(s[i]=='T')
            t = i;
    }
    // cout<<g<<" "<<t;
    bool flag=false;
    if(g<t)
    {
        for(int i=g;i<n;i+=k)
        {
            if(s[i]=='#') break;
            if(s[i]=='T')
            {
                flag=true;
                break;
            }
        }
    }
    else
    {
        for(int i=g;i>=0;i-=k)
        {
            if(s[i]=='#') break;
            if(s[i]=='T')
            {
                flag=true;
                break;
            }
        }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}