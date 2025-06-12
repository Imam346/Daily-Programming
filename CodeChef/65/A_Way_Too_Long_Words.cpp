#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    int n; cin>>n;
    while(n--)
    {
        string s; cin>>s;
        if(s.size()>10)
        {
            string tmp;
            int num = s.size()-2;
            tmp = s[0] + to_string(num) + s[s.size()-1];
            cout<<tmp<<endl;
        }
        else
            cout<<s<<endl;
    }
    return 0;
}