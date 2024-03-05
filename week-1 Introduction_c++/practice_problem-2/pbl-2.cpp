#include <iostream>
using namespace std;
class Crickater
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Crickater *dhoni = new Crickater;
    (*dhoni).jersey_no = 87532097;
    char c[100] = "India";
    strcpy(dhoni->country, c);
    Crickater *kholi = new Crickater;
    strcpy(kholi->country, dhoni->country);
    kholi->jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout << kholi->jersey_no << endl
         << kholi->country;
    return 0;
}