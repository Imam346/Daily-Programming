#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    string s; 
    getline(cin, s);
    reverse(s.begin(), s.end());
    
    for(char c:s)
    {
        if(c=='?' or c==' ')
        {
            continue;
        }
        char ch = tolower(c);
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='y')
        {
            cout<<"YES"<<endl;
            break;
        }
        else cout<<"NO"<<endl; break;
    }
    return 0;
}