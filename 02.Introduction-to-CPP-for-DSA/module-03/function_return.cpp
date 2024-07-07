#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double gpa;
        Student(int roll, int cls, double gpa)
        {
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};

Student fun()
{
    Student aRahim(29, 9, 4.93);
    return aRahim;
}

int main()
{
    Student ans = fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
}