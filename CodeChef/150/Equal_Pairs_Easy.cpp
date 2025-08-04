#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> ar(n);
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            freq[ar[i]]++;
        }

        int mx_val = -1;
        int mx_cnt = 0;
        for(auto &x:freq)
        {
            int val = x.first;
            int cnt = x.second;
            if(cnt>mx_cnt && val!=0)
            {
                mx_cnt = cnt;
                mx_val = val;
            }
        }
        if(mx_val==-1) mx_val = 1;
        // cout<<mx_val<<endl;
        
        for(int i=0;i<n;i++)
        {
            if(ar[i]==0)
                ar[i] = mx_val;
        }

        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                    ans++;
            }
        }

        cout<<ans<<'\n';
    }
    
    return 0;
}
