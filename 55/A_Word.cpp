#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    string s; cin>>s;
    int Upper=0, Lower=0;
    for(char c:s)
    {
        if(c>='A' && c<='Z')
            Upper++;
        else Lower++;
    }
    
    if(Upper>Lower)
    {
        for(char &c:s)
            c = toupper(c);
    }
    else if(Lower>Upper)
    {
        for(char &c:s)
            c = tolower(c);
    }
    else
    {
        for(char &c:s)
            c = tolower(c);
    }
    cout<<s<<endl;
    return 0;
}