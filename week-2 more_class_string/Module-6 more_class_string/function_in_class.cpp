#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int marks1,marks2;
        Person(string name, int age){
            this->name  = name;
            this->age = age;
            this->marks1 = marks1;
            this->marks2 = marks2;
        }
        void print(){
            cout<<name<<" "<<age<<endl;
        }

        Person(int marks1, int marks2){
            this->marks1 = marks1;
            this->marks2 = marks2;
        }
        int print2(){
            return marks1+marks2;
        }

};
int main()
{
    Person p1("Abu Naim", 20);
    Person p2(90, 100);
    p1.print();
    cout<<p2.print2();
    return 0;
}