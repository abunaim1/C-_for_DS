#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int found = 0;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            found = 1;
            break;
        }
    }
    if (found != 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}