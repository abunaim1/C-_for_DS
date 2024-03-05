#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char o;
    cin >> x >> o >> y;
    if (o == '+')
    {
        cout << x + y;
    }
    else if (o == '*')
    {
        cout << x * y;
    }
    else if (o == '/')
    {
        cout << x / y;
    }

    else
    {
        cout << x - y;
    }
    return 0;
}