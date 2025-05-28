#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int k,r;
    cin>>k>>r;

    int i=1;
    while(true)
    {
        int num = (k*i);
        if(num%10==0 || num%10==r)
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}