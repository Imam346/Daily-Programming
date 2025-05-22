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
        if(n%2!=0)
        {
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}