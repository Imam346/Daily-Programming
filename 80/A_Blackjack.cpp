#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    
    int n; cin>>n;
    if(n<=10 or n>21) cout<<0<<endl;
    else if(n==20) cout<<15<<endl;
    else cout<<4<<endl;
    return 0;
}