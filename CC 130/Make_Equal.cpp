#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

vector<string>ans;
string check_element(vector<int>& ar)
{
    int n=ar.size();
    if(ar[0]!=ar[n-1])
        return "NO";
    else
    {
        int first = ar[0];
        for(int i=1;i<n-1;i++)
        {
            if(ar[i]<first)
                return "NO";
        }
        return "YES";
    }
}
int main()
{
    Code By Imam
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];

        string result = check_element(ar);
        ans.push_back(result);
    }
    for(auto s:ans)
        cout<<s<<endl;
    return 0;
}