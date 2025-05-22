#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int min_operation(string &s)
{
    int n = s.size();
    if(n==1) return 0;

    int segment=0;
    char c = s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]==c)
        {
            segment++;
        }
        c = s[i];
    }
    return segment;
}
int main()
{
    Code By Imam
    
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int min_op = min_operation(s);
        cout<<min_op<<'\n';
    }
    return 0;
}