#include <iostream>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    float grade;
    Student(char n[100], int r, float f)
    {
        strcpy(name, n);
        roll = r;
        grade = f;
    }
};

int main()
{
    // Student rahim("Abu Naim", 200, 4.33);
    Student *rahim = new Student("Abu Naim", 200, 4.33);

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).grade<<endl;

    // shortcut way
    // arrow sign
    // (*rahim). = rahim->

    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->grade << endl;

    // updating value
    // (*rahim).grade = 5.44;
    rahim->grade = 5.44;

    cout << rahim->grade << endl;
    
    // delete an objectn
    delete rahim;
    cout << rahim->name << endl;
    cout << rahim->roll << endl;
    cout << rahim->grade << endl;
    return 0;
}