//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;

    long long sum = accumulate(ar.begin(),ar.end(),0);
    double final_drink = sum/(n*1.0);
    cout<<fixed<<setprecision(12)<<final_drink<<endl;
    return 0;
}