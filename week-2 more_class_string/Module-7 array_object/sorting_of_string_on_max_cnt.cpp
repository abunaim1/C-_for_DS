#include <iostream>
using namespace std;
class CustomSort
{
public:
    char c;
    int cnt;
};
bool cmp (CustomSort cnt1, CustomSort cnt2){
    if (cnt1.cnt>cnt2.cnt)
    {
        return true;
    }
    else return false;
}
int main()
{
    int n;
    cin >> n;
    CustomSort obj[26];
    //to initialize a,b,...with 0;
    for (int i = 0; i < 26; i++)
    {
        obj[i].c = i + 'a';
        obj[i].cnt = 0;
    }
    //input...and count....
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        obj[a - 'a'].cnt++;
    }

    //sorting with fn....
    sort(obj, obj+26, cmp);

    //print....
    for (int i = 0; i < 26; i++)
    {
        if (obj[i].cnt>0)
        {
            // cout<<obj[i].c<<" "<<obj[i].cnt<<endl;
            for (int j = 0; j < obj[i].cnt; j++)
            {
                cout<<obj[i].c;
            }            
        }   
    }
    return 0;
}