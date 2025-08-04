#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int mx = max(x,y);
	    int mn = min(x,y);
	    
	    if(mn*2<=mx) cout<<0<<endl;
	    else if(mn==mx) 
	    {
	        if(mx%2==0) cout<<mx/2<<endl;
	        else cout<<(mx/2)+1<<endl;
	    }
	    else
	    {
	        int cnt1 = 0;
	        int mx1 = mx, mn1 = mn;
	        while(mx<(2*mn))
	        {
	            mn--;
	            cnt1++;
	        }
	        
	        int cnt2=0;
	        while(mx1<(2*mn1))
	        {
	            mx1++;
	            cnt2++;
	        }
	        cout<<min(cnt1,cnt2)<<endl;
	    }
	}

}
