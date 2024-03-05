#include <iostream>
using namespace std;
int main()
{
    // Even odd
    int a;
    cin >> a;
    switch (a % 2)
    {
    case 0:
        cout << "Even";
        break;

    default:
        cout << "Odd";
    }
    // vowel check
    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "vowel";
        break;
    case 'u':
        cout << "vowel";
        break;
    default:
        cout << "cosonant";
    }
}
