#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id, marks;
    char section, name[101];
};

int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        Student sList[3];
        for(int j=0; j<3; j++)
        {
            cin>>sList[j].id>>sList[j].name>>sList[j].section>>sList[j].marks;
        }

        int resIndex = 0;
        for(int j=1; j<3; j++)
        {
            if (sList[resIndex].marks<sList[j].marks)
            {
                resIndex = j;
            }
            else if(sList[0].marks==sList[j].marks){
                if (sList[resIndex].id>sList[j].id)
                {
                    resIndex = j;
                }
            }
        }

        cout<<sList[resIndex].id<<" "<<sList[resIndex].name<<" "<<sList[resIndex].section<<" "<<sList[resIndex].marks<<endl;
    }
    return 0;
}