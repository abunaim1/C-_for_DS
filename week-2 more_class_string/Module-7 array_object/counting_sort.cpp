#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        cnt[c-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i]>0 )
        {
            for (int j = 0; j < cnt[i]; j++)
            {
               printf("%c", i+'a');
            }            
        }        
    }    
    return 0;
}