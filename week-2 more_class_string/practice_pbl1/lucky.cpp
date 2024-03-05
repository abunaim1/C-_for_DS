#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int sum = 0, sum2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum = sum + s[i] - '0';
        }
        for (int i = 0; i < s.size() / 2; i++)
        {
            sum2 = sum2 + s[i] - '0';
        }
        if ((float)sum / 2 == sum2)
        {
            cout << "yes"<<endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }

    return 0;
}