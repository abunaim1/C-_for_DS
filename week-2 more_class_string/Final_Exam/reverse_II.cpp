#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};
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
    }
    for (int i = 0, j=n-1; i < j; i++, j--)
    {
        swap(obj[i].id, obj[j].id);
    }
     
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].id<<endl;
    }
    return 0;
}