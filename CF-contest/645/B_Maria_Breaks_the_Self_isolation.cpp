/*----------------------------------------
    author:  Imam
    created: 09.01.2025 20:32:29
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int ar[n+1];
        for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
        sort(ar+1,ar+(n+1));
        int i=n;
        while(i>0){
            if(ar[i]<=i){break;}
            i--;
        }

        printf("%d\n",(i+1));
    }
    return 0;
}
/*
the granny i agrees to come if the number of other grannies who came earlier or at the same time with her is greater than or equal to a[i].


i-th tomo dadi aste raji hobe jodi age theke asa dadir songkha 
a[i] er soman ba tar theke beshi hoy
*/