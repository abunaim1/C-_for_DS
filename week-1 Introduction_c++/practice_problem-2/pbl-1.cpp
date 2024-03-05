#include <iostream>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    float math_marks;
    int cls;
    Student(char *nm, int r, char s, float mm, int c)
    {
        strcpy(name, nm);
        section = s;
        roll = r;
        math_marks = mm;
        cls = c;
    }
};
Student fun1()
{
    char n1[100] = "Abu Naim Abdullah";
    Student s1(n1, 10, 'A', 88.90, 12);
    return s1;
}
Student fun2()
{
    char n2[100] = "Fahad Al Hossain";
    Student s2(n2, 20, 'C', 99.20, 12);
    return s2;
}
Student fun3()
{
    char n3[100] = "Amit Mahmud Sabbir";
    Student s3(n3, 30, 'D', 100, 12);
    return s3;
}
int main()
{
    Student s1 = fun1();
    Student s2 = fun2();
    Student s3 = fun3();

    cout << "Studen One: " <<endl<<endl
         << s1.name << endl
         << s1.cls << endl
         << s1.roll << endl
         << s1.section << endl
         << s1.math_marks << endl;
    cout << "Studen Two: " <<endl<<endl
         << s2.name << endl
         << s2.cls << endl
         << s2.roll << endl
         << s2.section << endl
         << s2.math_marks << endl;
    cout << "Studen Three: " <<endl<<endl
         << s3.name << endl
         << s3.cls << endl
         << s3.roll << endl
         << s3.section << endl
         << s3.math_marks << endl;

    if (s1.math_marks>s2.math_marks && s1.math_marks>s3.math_marks){
        printf("%s Got The Heighst", s1.name);
    }
    else if (s2.math_marks>s1.math_marks && s2.math_marks>s3.math_marks)
    {
        printf("%s Got The Heighst", s2.name);
    }
    else{
        printf("%s Got The Heighst", s3.name);
    }
    return 0;
}