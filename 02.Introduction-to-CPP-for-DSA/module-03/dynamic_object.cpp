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

int main()
{
    Student* aKarim = new Student(29, 9, 4.93);
    cout<<aKarim->roll<<" "<<aKarim->cls<<" "<<aKarim->gpa<<endl;
}