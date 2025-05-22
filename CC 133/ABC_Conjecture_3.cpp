#include<bits/stdc++.h>
#define ll long long
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
        int a=0,b=0,c=0,mv=0;
        for(auto ch:s)
        {
            if(ch=='a') a++;
            else if(ch=='b' && a>0) b++;
            else if(ch=='c' && b>0)
            {
                c++;
                mv++;
                a--,b--;
            }
        }
        cout<<mv<<'\n';
    }
    return 0;
}