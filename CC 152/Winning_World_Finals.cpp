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
        int m,p;
        cin>>m>>p;

        int cnt=1;
        for(int i=m;i<=298;i++)
        {
            int x = p+(20*cnt)+(i+1);
            if(x>1000) break;
            cnt++;
        }
        cout<<cnt-1<<'\n';
    }
    return 0;
}