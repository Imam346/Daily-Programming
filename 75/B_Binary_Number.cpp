#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    string x; cin>>x;

    int ans = 0;
    while(x != "1")
    {
        ans++;
        int sz = x.size();
        if(x[sz-1]=='0')//if last char is '0', the num is even
            x.pop_back();
        else // if last char is '1', the num is odd
        {
            bool flag = true;
            for(int i=sz-1;i>=0;i--)
            {
                if(x[i]=='1')
                    x[i]='0';
                else
                {
                    x[i]='1';
                    flag=false;
                    break;
                }
            }
            if(flag)
                x.insert(x.begin(),'1');
        }
    }
    cout<<ans<<endl;
    return 0;
}