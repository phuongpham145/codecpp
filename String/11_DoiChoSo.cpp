#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i = s.length() - 2;
    while (i >= 0 && s[i] <= s[i + 1])
    {
        --i;
    }
    if (i == -1)
    {
        cout << "-1\n";
    }
    int j = s.length() - 1;
    while (s[i] <= s[j] && s[j - 1] == s[j] && s[j] < s[i])
    {
        --j;
    }
    swap(s[i], s[j]);
    if (s[0] == '0')
    {
        cout << "-1\n";
    }
    else
    {
        cout << s << '\n';
    }
}
int main()
{
    solve();
    return 0;
}