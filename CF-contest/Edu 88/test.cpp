/*----------------------------------------
    author:  Imam
    created: 09.01.2025 10:16:11
----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double gpa;
    Student(int r,int c,double g){
        (*this).roll=r;
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
    Student rahim(29,10,3.44);
    Student* ptr = &rahim;
    cout<<ptr;
    return 0;
}