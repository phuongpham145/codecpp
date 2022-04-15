#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int a[256] = {0};
        for (char x : s)
        {
            a[x]++;
        }
        long long ans = s.length();
        for (int i = 0; i < 256; i++)
        {
            if (a[i] != 0)
            {
                ans += a[i] * (a[i] - 1) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}