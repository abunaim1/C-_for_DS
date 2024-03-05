#include<iostream>
using namespace std;
void pirnt(string &s){
    s = "world";
}
int main()
{
    string s="hello";
    pirnt(s);
    cout<<s;
    return 0;
}