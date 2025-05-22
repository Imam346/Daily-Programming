#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn1 = (2*a)+(3*b);
    int mn2 = (2*c)+b;
    cout<<min(mn1,mn2)<<endl;
    return 0;
}