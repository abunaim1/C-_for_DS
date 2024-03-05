#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt[26] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (s[i] - 'A' == j && cnt[j] == 0)
                {
                    cnt[s[i] - 'A']++;
                }
            }
            cnt[s[i] - 'A']++;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            sum = sum + cnt[i];
        }
        cout << sum<< endl;
    }

    return 0;
}