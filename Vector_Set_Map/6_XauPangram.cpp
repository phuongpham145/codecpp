#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Set
    string s;
    getline(cin, s);
    set<char> se;
    for (char x : s)
    {
        se.insert(tolower(x));
    }
    cout << se.size() << endl;
    if (se.size() == 26)
        cout << "Yes\n";
    else
        cout << "No\n";
    // map
    cin.ignore();
    string s2;
    getline(cin, s2);
    map<char, bool> mp;
    for (char x : s2)
    {
        mp[tolower(x)] = true;
    }
    if (mp.size() == 26)
        cout << "Yes\n";
    else
        cout << "No\n";
    // Mang danh dau
    cin.ignore();
    string s3;
    getline(cin, s3);
    int a[26] = {0};
    for (char x : s3)
    {
        a[tolower(x) - 'a'] = true;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        cnt += a[i];
    }
    if (cnt == 26)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}