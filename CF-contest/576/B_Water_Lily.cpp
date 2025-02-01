/*----------------------------------------
    author:  Imam
    created: 29.01.2025 16:06:04
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    long double h,l;
    cin>>h>>l;
    long double x = ((l*l)-(h*h))/(2.0*h);
    cout<<fixed<<setprecision(13)<<x<<'\n';
    return 0;
}