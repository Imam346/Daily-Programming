#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i%2==0 && ar[i]%2!=0) odd++;
            if(i%2 && ar[i]%2==0) even++;
        }

        if(even==odd) cout<<even<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}