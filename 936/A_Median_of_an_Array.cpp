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
        vector<int> ar(n);
        for(int &i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        int mid = (n-1)/2;
        int cnt=0;
        for(int i=mid;i<n;i++)
        {
            if(ar[i]==ar[mid])
                cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}