#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    vector<pair<int,int>> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].first;
        ar[i].second = i+1;
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n/2;i++)
        cout<<ar[i].second<<" "<<ar[n-i-1].second<<endl;
    return 0;
}