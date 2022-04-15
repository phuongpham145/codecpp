#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (char x : s)
    {
        a[x - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!a[i])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}