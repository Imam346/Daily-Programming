//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat(6,vector<int>(6,0));
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            cin>>mat[i][j];
    }

    int x=-1,y=-1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(mat[i][j]==1) {x=i;y=j;}
        }
    }

    int ans = abs(3-x)+abs(3-y);
    cout<<ans<<endl;
    return 0;
}