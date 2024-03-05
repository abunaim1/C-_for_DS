#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char s,x;
    cin>>a>>s>>b>>x>>c;
    if (a+b == c && s=='+' || a*b==c && s=='*' || a-b==c && s=='-')
    {
        cout<<"Yes";
    }
    else{
        if(s=='+')
        {
            cout<<a+b;
        }
        else if(s=='-')
        {
           cout<<a-b;
        }
        else if(s=='*'){
            cout<<a*b;
        }
        
    }
    return 0;
}