#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<int> ms;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            ms.insert(x);
        }

        while(k--)
        {
            int mn = *ms.begin();
            int mx = *ms.rbegin();

            ms.erase(ms.find(mn));
            ms.erase(ms.find(mx));
            ms.insert(mn+mx);
        }

        for(auto x:ms) cout<<x<<" ";
        cout<<endl;
    }
}
