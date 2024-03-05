// Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor

// #include <iostream>
// using namespace std;
// class Person
// {
// public:
//     char name[100];
//     float height;
//     int age;
//     Person(char* n, float h, int a){
//         strcpy(name,n);
//         height = h;
//         age = a;
//     }
// };
// int main()
// {
//     char name[100] = "Abu Naim";
//     Person* p1 = new Person(name, 5.6, 22);
//     cout<<sizeof(*p1);
//     return 0;
// }

// Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.

#include <iostream>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};
int main()
{
    char name[100] = "Abu Naim";
    Person *p1 = new Person(name, 5.6, 22);
    char name2[100] = "Taru";
    Person *p2 = new Person(name2, 5.1, 20);

    if (p1->age > p2->age)
    {
        cout<<p1->name;
    }
    else{
        cout<<p2->name;
    }
    
    return 0;
}