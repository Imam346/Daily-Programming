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
        int l, r;
        cin>>l>>r;
        int cnt=0;
        if(l%2!=0)
        {
            for(int i=l;i<=r;i+=4)
            {
                if((i+2)<=r)
                    cnt++;
            }
        }
        else
        {
            for(int i=l+1;i<=r;i+=4)
            {
                if((i+2)<=r)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}