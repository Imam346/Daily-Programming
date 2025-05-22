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
        vector<string> mat;
        for(int i=1;i<=n;i++)
        {
            string s; cin>>s;
            mat.push_back(s);
        }

        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]=='#')
                {
                    ans.push_back(j+1);
                }
            }
        }

        reverse(ans.begin(),ans.end());
        for(auto x:ans) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}