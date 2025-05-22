#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    string a,b;
    cin>>a>>b;

    bool flag=false;
    for(int i=0;i<a.size();i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);

        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                flag=true;
                break;
            }
            break;
        }
    }
    if(a==b) cout<<0<<endl;
    else if(flag) cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}