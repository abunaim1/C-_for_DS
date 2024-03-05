#include <iostream>
using namespace std;
class Bike
{
public:
    int gear;
    char name[100];
    char color[100];
    int speed;
    Bike(char *n, char *c, int s, int g){
        strcpy(name,n);
        strcpy(color,c);
        speed = s;
        gear = g;
    }
};
int main()
{
    Bike suzuki("Suzuki Gixer", "Black", 150, 6);
    cout<<suzuki.name;
    return 0;
}