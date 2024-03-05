#include<iostream>
using namespace std;
int main()
{
    string a = "hello";
    string b = "B";
    a+= b; //a = a+b;-->works parfectly;
    cout<<a<<endl;
    a.append(b); //a.append("world"); -->works parfectly; takes full another string or string variable just and it is inside" ".
    cout<<a<<endl;
    a = "helloBHN"; //-->works parfectly; just assign a new string.
    cout<<a<<endl;
    a.push_back('h');//-->takes a character just and it is inside' '.
    cout<<a<<endl;
    a.pop_back(); //-->remove last charectar.
    cout<<a<<endl;
    a.pop_back(); // -> ,,
    cout<<a<<endl;
    return 0;
}