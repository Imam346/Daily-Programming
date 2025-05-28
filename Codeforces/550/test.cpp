/*----------------------------------------
    author:  Imam
    created: 04.12.2024 09:20:36
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string s;
        int mark1;
        int mark2;
        int id;
        int roll;
        char c;
};
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i].s>>ar[i].roll>>ar[i].c>>ar[i].id>>ar[i].mark1>>ar[i].mark2;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i].mark2<ar[j].mark2){
                swap(ar[i],ar[j]);
            }
            else if(ar[i].mark2==ar[j].mark2){
                if(ar[i].mark1<ar[j].mark1){
                    swap(ar[i],ar[j]);
                }
                else if(ar[i].mark1==ar[j].mark1){
                    if(ar[i].id>ar[j].id){
                        swap(ar[i],ar[j]);
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<ar[i].s<<" "<<ar[i].roll<<" "<<ar[i].c<<" " <<ar[i].id<<" "<<ar[i].mark1<<" "<<ar[i].mark2<<endl;
    return 0;
}