#include <iostream>
using namespace std;
int fun()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }
    int mn = INT_MAX;
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            x = a[i] + a[j] + j - i;
            mn = min(mn, x);
        }
    }
    return mn;
}
int main()
{
    int test;
    cin>>test;
    int mn;
    for (int i = 0; i < test; i++)
    {
        mn = fun();
        cout << mn <<endl;
    }
   
    return 0;
}