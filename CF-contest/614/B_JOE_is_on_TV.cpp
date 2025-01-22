/*----------------------------------------
    author:  Imam
    created: 20.01.2025 22:44:06
----------------------------------------*/
#include<iostream>
#include<iomanip>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(NULL);
    int n; std::cin>>n;
    double ans = 0.0;
    for(int i=1;i<=n;i++){
        ans += (1.0/i);
    }
    std::cout<<std::fixed<<std::setprecision(12)<<ans<<'\n';
    return 0;
}