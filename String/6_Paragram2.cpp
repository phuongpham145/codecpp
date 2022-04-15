#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        if (s.length() < 26)
        {
            cout << "NO\n";
            continue;
        }
        set<char> se;
        for (char c : s)
        {
            se.insert(c);
        }
        if (26 - se.size() <= k)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}