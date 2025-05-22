//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        map<pair<int,int>,int> mp;
        int a=0,b=0, ans=0;
        for(char c:s)
        {
            int prev_a=a, prev_b=b;
            if(c=='S') a--;
            else if(c=='N') a++;
            else if(c=='W') b--;
            else b++;

            if(!mp.count({a+prev_a, b+prev_b})){
                ans += 5;
                mp[{a+prev_a, b+prev_b}]=1;
            }
            else ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}