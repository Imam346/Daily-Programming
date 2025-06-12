#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,d;
    cin>>n>>d;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(ar[i]-ar[j])<=d)
                cnt++;
        }
    }
    cout<<cnt*2<<endl;
    return 0;
}