#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person* p1 = new Person("Abu Naim", 20);
    Person* p2 = new Person("Fahad", 23);
    *p2 = *p1;
    delete p1;
    cout << p2->name<<" "<<p2->age<<endl;
    return 0;
}