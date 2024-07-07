#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{   
    Person* rakib = new Person("Rakib Ahsan", 25);
    Person* sakib = new Person("Sakib Ahsan", 23);
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name;
    return 0;
}