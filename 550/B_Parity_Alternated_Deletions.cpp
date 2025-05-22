/*----------------------------------------
    author:  Imam
    created: 29.11.2024 19:40:26
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin>>n;
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x%2) odd.push_back(x);
        else even.push_back(x);
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());

    int i=0,j=0;
    while(i<even.size() && j<odd.size()){i++,j++;}
    ll ans=0;
    if(i!=even.size()){
        i++;
        for(int k=i;k<even.size();k++)
            ans += even[k];
    }
    if(j!=odd.size()){
        j++;
        for(int k=j;k<odd.size();k++)
            ans += odd[k];
    }

    cout<<ans<<'\n';
    return 0;
}