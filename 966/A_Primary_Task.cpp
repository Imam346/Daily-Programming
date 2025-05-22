#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        string s = to_string(a);
        bool flag=false;
        if(s.size()>=3 && s[0]=='1' && s[1]=='0' && s[2]!='0')
        {
            string rem_s = s.substr(2);
            if(!rem_s.empty())
            {
                int num = stoi(rem_s);
                if(num>=2)
                    flag=true;
            }
        }
        
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}