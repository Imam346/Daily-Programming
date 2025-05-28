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
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(a[j]==b[i])j++;
            i++;
        }
        cout<<j<<'\n';
    }
    return 0;
}