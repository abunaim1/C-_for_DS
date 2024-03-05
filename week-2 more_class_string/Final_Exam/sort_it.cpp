#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    
    if (a.math_marks+a.eng_marks == b.math_marks+b.eng_marks)
        return a.id < b.id;
    else
        return a.math_marks+a.eng_marks > b.math_marks+b.eng_marks;
}
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].s;
        cin >> obj[i].id;
        cin >> obj[i].math_marks;
        cin >> obj[i].eng_marks;
    }   
    sort(obj, obj + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].id << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }
    return 0;
}