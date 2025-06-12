#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int mx = 4e5+5;
int lps[mx];
inline void create_LPS_array(string &pat)
{
    int m = pat.size();
    int i=1, j=0;
    lps[0]=0;

    while(i<m)
    {
        if(pat[i]==pat[j])
        {
            lps[i] = j+1;
            i++;
            j++;
        }
        else
        {
            if(j!=0)
            {
                j = lps[j-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}
int main()
{
    Code_By_Imam
    string s; cin>>s;

    create_LPS_array(s);

    int n = s.size();
    if(lps[n-1]*2 > n)
    {
        cout<<"YES\n";
        for(int i=0;i<lps[n-1];i++)
            cout<<s[i];
        cout<<'\n';
    }
    else cout<<"NO\n";
    return 0;
}
/*

KMP Algorithm Usage: To efficiently find the longest proper prefix which is also a suffix,
we can use the prefix function (similar to the failure function in the Knuth-Morris-Pratt string matching algorithm).

*/