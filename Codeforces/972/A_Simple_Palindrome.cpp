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
        int n; cin>>n;
        string s;
        while(s.length()<n)
            s += "aeiou";
        s.resize(n);
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}