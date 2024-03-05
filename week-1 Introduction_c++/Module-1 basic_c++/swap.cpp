#include <iostream>
#include <utility> //for swaping
using namespace std;
// void my_swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main()
{
    int a, b;
    cin >> a >> b;
    // my_swap(&a,&b);

    swap(a, b); // using build-in-function
    printf("%d %d", a, b);
}