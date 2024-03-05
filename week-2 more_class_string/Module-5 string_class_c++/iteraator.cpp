#include<iostream>
using namespace std;
int main()
{
    string s = "hello";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    // cout<<*s.begin()<<endl;
    // cout<<*s.end()<<endl; 
    // string :: iterator it; == auto;
    for(auto it = s.begin(); it < s.end(); it++) cout<<*it<<endl;
    return 0;
}