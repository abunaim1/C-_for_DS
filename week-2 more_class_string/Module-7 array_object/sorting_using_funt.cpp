#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks < b.marks)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
        cin.ignore();
    }
    sort(s,s+3,cmp);
    for (int i = 0; i < 3; i++)
    {
        cout << s[i].name << " ";
    }

    return 0;
}