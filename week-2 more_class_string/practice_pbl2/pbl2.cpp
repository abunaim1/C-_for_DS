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
    int n;
    cin>> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin>>obj[i].name;
        cin>>obj[i].roll;
        cin>>obj[i].marks;
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        cout<<obj[i].name<<" "<<obj[i].roll<<" "<<obj[i].marks<<endl;
    }
    
    return 0;
}