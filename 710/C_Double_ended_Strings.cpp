#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline string longestCommonSubstring(string &a, string &b)
{
    int n = a.length();
    int m = b.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int maxLength=0;
    int endIndex=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
                if(dp[i][j]>maxLength)
                {
                    maxLength=dp[i][j];
                    endIndex=i-1;
                }
            }
        }
    }
    //return the longest common substring
    return a.substr(endIndex-maxLength+1, maxLength);
}
int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        string LCS = longestCommonSubstring(a,b);
        int n=LCS.size();
        int ans = 0;
        ans += (a.size()-n);
        ans += (b.size()-n);
        cout<<ans<<endl;
    }
    return 0;
}