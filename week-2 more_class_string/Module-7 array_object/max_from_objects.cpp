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
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    // }

    // Maximum value;
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (s[i].marks > mx.marks)
        {
            mx = s[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    // minimum value;
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (mn.marks > s[i].marks)
        {
            mn = s[i];
        }
    }
    cout << mn.marks << " " << mn.roll << " " << mn.name << endl;

    return 0;
}