/*----------------------------------------
    author:  Imam
    created: 08.12.2024 15:39:46
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    int sum=accumulate(ar.begin(),ar.end(),0);
    double avg = sum/(n*1.0);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(avg>=4.5){break;}
        cnt++;
        sum-=ar[i];
        sum+=5;
        avg = sum/(n*1.0);
    }
    cout<<cnt<<'\n';
    return 0;
}