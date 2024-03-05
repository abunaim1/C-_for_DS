#include<iostream>
using namespace std;
int main()
{
    string s = "hello";
    s.assign("world"); // as s = "wprld";
    cout<<s<<endl;
    s.append("hello");
    cout<<s<<endl;
    s.erase(4,3); //nidristo kichu charector dlt korbe,, ekhane 4 no. index theke 3 ta charactor dlt korbe;
    cout<<s<<endl;
    s.replace(4,3,"naim"); //nidristo jaigai string soriye sekhane ja dibo oita replace kore dibe
    cout<<s<<endl;
    
    return 0;
}