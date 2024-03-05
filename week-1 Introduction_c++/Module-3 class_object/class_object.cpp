#include <iostream>
using namespace std;
class Bike
{
public:
    int gear;
    char name[100];
    char color[100];
    int speed;
};
int main()
{
    Bike suzuki;
    char bike1[100] = "Suzuki Gixer";
    strcpy(suzuki.name, bike1); 
    char color_suzuki[100] = "Black";
    strcpy(suzuki.color, color_suzuki);
    suzuki.speed = 150;
    suzuki.gear = 6;

    Bike yamaha;
    char bike2[100] = "MT-15";
    strcpy(yamaha.name, bike2);
    yamaha.speed = 130;
    yamaha.gear = 4;
    char color2[100] = "Red";
    strcpy(yamaha.color, color2);

    cout<<suzuki.name<<endl<<suzuki.color<<endl<<suzuki.speed<<endl<<suzuki.gear;
    
    return 0;
}