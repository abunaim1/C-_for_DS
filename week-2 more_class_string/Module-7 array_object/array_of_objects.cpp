#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    return 0;
}