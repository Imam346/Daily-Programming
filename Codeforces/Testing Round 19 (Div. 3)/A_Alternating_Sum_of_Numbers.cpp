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
        vector<int> ar;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            if(i%2!=0)
                ar.push_back(x);
            else ar.push_back(-x);
        }
        
        ll sum=0;
        sum = accumulate(ar.begin(),ar.end(),sum);
        cout<<sum<<'\n';
    }
    return 0;
}