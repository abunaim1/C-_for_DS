#include <iostream>
#include<algorithm>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp (Student a, Student b){
    if(a.marks == b.marks) return a.roll<b.roll;
    return a.marks > b.marks;
}
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
    sort(obj, obj+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<obj[i].name<<" "<<obj[i].roll<<" "<<obj[i].marks<<endl;
    }
    
    return 0;
}