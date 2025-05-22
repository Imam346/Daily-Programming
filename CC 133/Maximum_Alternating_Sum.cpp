#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        vector<int> tmp;
        bool flag=true;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(flag)
            {
                tmp.push_back(ar[j]);
                flag=false;
                j--;
            }
            else
            {
                tmp.push_back(-ar[i]);
                flag=true;
                i++;
            }
        }
        ll sum=0;
        for(auto val:tmp) sum+=val;
        cout<<sum<<'\n';
    }
    return 0;
}