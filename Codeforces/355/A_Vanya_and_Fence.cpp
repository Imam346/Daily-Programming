#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,h;
    cin>>n>>h;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int sum=0;
    for(auto x:ar)
    {
        if(x<=h)  sum +=1;
        else sum += 2;
    }
    cout<<sum<<endl;
    return 0;
}