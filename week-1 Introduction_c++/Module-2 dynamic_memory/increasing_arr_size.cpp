#include<iostream>
using namespace std;
int main()
{
    int *a = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    int *b = new int [12];
    for(int j=0; j<12; j++){
        b[j] = a[j];
    }
    b[10] = 78;
    b[11] = 88;
    for (int i = 0; i < 12; i++)
    {
        cout<<b[i]<<" "<<endl;
    }
    // delete a arry
    delete[] a;
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}