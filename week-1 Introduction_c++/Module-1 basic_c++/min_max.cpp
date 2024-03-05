#include <iostream>
#include<algorithm> // for min max;
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    printf("Minimum: %d\n", mn);

    int mx = max(a, b);
    printf("Maximum: %d\n", mx);
}