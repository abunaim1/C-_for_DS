#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore(); //jodi string input er age ekta int nei tahole eta dorkar hobe.
    //getchar(); //same kaj kore cin.ignore() er moto;
    string s;
    getline(cin,s);
    cout<<x<<endl<<s<<endl;
    return 0;
}