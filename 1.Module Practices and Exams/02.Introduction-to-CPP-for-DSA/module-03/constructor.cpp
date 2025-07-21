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
    Student aRahim(29, 9, 4.93);
    Student aKarim(31, 9, 4.91);
    cout<<aRahim.roll<<" "<<aRahim.cls<<" "<<aRahim.gpa<<endl;
    cout<<aKarim.roll<<" "<<aKarim.cls<<" "<<aKarim.gpa;
    return 0;
}