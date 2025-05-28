#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,c;
    cin>>n>>c;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;

    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if((ar[i+1]-ar[i])<=c)
            cnt++;
        else cnt=0;
    }
    cout<<cnt+1<<endl;
    return 0;
}