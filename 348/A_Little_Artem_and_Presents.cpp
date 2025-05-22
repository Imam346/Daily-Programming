#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    int cnt=0;
    bool flag=true;
    while(true)
    {
      if(flag)
      {
        if(n>=1) n -= 1;
        else break;
        flag=false;
      }
      else if(!flag)
      {
        if(n>=2) n -=2;
        else break;
        flag=true;
      }
      cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}