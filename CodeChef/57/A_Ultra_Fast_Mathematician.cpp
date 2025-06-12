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
    int i=0;
    while(i<a.size())
    {
        if(a[i]==b[i]) cout<<0;
        else cout<<1;
        i++;
    }
    return 0;
}