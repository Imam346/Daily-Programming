//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> ar({a,b,c,d});
    sort(ar.rbegin(),ar.rend());
    cout<<ar[0]-ar[1]<<" ";
    cout<<ar[0]-ar[2]<<" ";
    cout<<ar[0]-ar[3]<<endl;
    return 0;
}