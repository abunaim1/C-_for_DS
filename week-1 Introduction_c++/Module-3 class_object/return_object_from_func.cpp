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
Student fun(){
    char n1[100] = "Abu Naim";
    Student s1 (n1, 20, 3.22);
    return s1;
}
int main()
{
    Student s1 = fun();
    cout<<s1.name<<endl;
    cout<<s1.grade<<endl;
    cout<<s1.roll<<endl;
    return 0;
}