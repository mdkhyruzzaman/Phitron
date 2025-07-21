#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string nm, int ag)
        {
            name = nm;
            age = ag;
        }
        void hello()
        {
            cout<<"hello"<<endl;
        }
};

int main()
{   
    Person rakib("Rakib Ahsan", 24);
    rakib.hello();
    return 0;
}