#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int flag=0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i]!=a[j])
        {
            flag=-1;
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}