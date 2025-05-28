#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

vector<int> seq(int n,int k)
{
    vector<int> v;
    if(k==1)
    {
        for(int i=2;i<=n;i++)
            v.push_back(i);
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i!=k)
                v.push_back(i);
        }
    }

    if(k<=n)
    {
        bool flag=false;
        for(int val:v)
        {
            if(val==k)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            if(k>1)
            {
                v[0]=1;
            }
            else
            {
                v[v.size()-1]=2;
            }
        }
    }

    if(v.size() > 25)
        v.resize(25);
    return v;
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> ans = seq(n,k);

        cout<<ans.size()<<'\n';
        for(auto val:ans) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}
