#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int mx=0, cnt=0;
    while(d--)
    {
        string s; cin>>s;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                flag=true;
                break;
            }
        }
        if(flag) cnt++;
        else
        {
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    mx = max(mx,cnt);
    cout<<mx<<endl;
    return 0;
}