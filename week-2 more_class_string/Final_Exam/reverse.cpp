#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};
int main()
{
    int n;
    cin>>n;
    Student obj[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].section;
        cin >> obj[i].math_marks;
        cin >> obj[i].eng_marks;
    }
    for (int i = n-1; i >= 0; i--)
    {
       cout << obj[i].name << " " << obj[i].cls << " " << obj[i].section << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }   
    return 0;
}
