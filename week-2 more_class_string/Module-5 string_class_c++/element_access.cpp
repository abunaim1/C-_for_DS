#include<iostream>
using namespace std;
int main()
{
    string s = "Hello World";
    cout<<s[0]<<endl;
    // s.at(0) and s.front() same kaj ei korbe first value dekha.
    cout<<s.back()<<endl;
    cout<<s[s.size()-1]<<endl; //same kaj last er value dekha.
    return 0;
}