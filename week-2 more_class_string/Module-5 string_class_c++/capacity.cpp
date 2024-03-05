#include<iostream>
using namespace std;
int main()
{
    string s = "hello";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s<<endl;

    string s2 = "hello world";
    cout<<s2<<endl;
    if(s2.empty()==true)cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    s2.clear();
    if(s2.empty()==true)cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

    string s3 = "how are you";
    cout<<s3<<endl;
    s3.resize(7);
    cout<<s3<<endl;
    cout<<s3.size()<<endl;
    s3.resize(11);
    cout<<s3<<endl;
    cout<<s3.size()<<endl;
    s3.resize(20,'N');
    cout<<s3<<endl;
    cout<<s3.size()<<endl;
    s3.clear();
    cout<<s3.size()<<endl;
    cout<<s3;
    return 0;
}