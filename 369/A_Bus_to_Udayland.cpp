#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    vector<string> vec;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }

    bool flag=false;
    for(auto &x:vec)
    {
        for(int i=0;i<x.length()-1;i++)
        {
            if(x[i]=='O' && x[i+1]=='O')
            {
                x[i]='+', x[i+1]='+';
                flag=true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag) 
    {
        cout<<"YES\n";
        for(auto x:vec) cout<<x<<endl;
    }
    else cout<<"NO\n";
    return 0;
}