#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline void solve()
{
    string s,t;
    cin>>s>>t;

    t.push_back('0');
    int j=0, n=t.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[j])
        {
            j++;
        }
        else if(s[i]=='?' && j<(n-1))
        {
            s[i] = t[j];
            j++;
        }
    }

    if(t[j]=='0')
    {
        cout<<"YES"<<'\n';
        char c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='?')
            {
                c = s[i];
                cout<<s[i];
            }
            else cout<<c;
        }
        cout<<'\n';
    }
    else cout<<"NO"<<'\n';
}
int main()
{
    Code_By_Imam

    int t; cin>>t;
    while(t--) solve();
    return 0;
}