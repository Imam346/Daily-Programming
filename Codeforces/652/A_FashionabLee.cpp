//Don't disappoint me
#include<bits/stdc++.h>
int main()
{
    int t; std::cin>>t;
    while(t--){
        int n; std::cin>>n;
        if(n%4==0) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;
}
/*
 we know that a regular n-sided convex polygon has n angles,
 if so n is divisible by 4, that means here will be n angles 
 otherwise not. if posible to make n angle then after rotate
 polygon will be beautiful otherwise not.

*/