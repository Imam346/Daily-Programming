#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline bool match_template(vector<int>&ar, string &s)
{
    int n = ar.size();
    if(n!=s.size()) return false;

    unordered_map<int, char>numToChar;
    unordered_map<char, int>charToNum;

    for(int i=0;i<n;i++)
    {
        int val = ar[i];
        char c = s[i];

        if(numToChar.count(val))
        {
            if(numToChar[val]!=c) 
                return false;
        }
        else numToChar[val] = c;

        if(charToNum.count(c))
        {
            if(charToNum[c]!=val) 
                return false;
        }
        else charToNum[c] = val;
    }
    return true;
}
int main()
{
    Code_By_Imam
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        int m; cin>>m;
        while(m--)
        {
            string s; cin>>s;

            if(match_template(ar,s))
                cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}
