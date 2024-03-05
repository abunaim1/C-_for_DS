#include<iostream>
using namespace std;
namespace naim1{
    int num = 20;
    void print(){
        cout << "Hello from naim1"<<endl;
    }
    
    class Person{
        public:
        int age;
        Person(int age){
            this->age = age;
        }
    };
}
namespace naim2{
    int num = 22;
    void print(){
        cout<<"Hello from naim2"<<endl;
    }
}
using namespace naim1;
int main()
{
    cout<<num<<" ";
    print();
    Person* p1 = new Person(100);
    cout<<p1->age<<endl;

    naim2::print();
    cout<<naim2::num<<endl;
    return 0;
}