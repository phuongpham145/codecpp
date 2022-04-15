#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Mang danh dau
    string s;
    getline(cin, s);
    int a[256] = {0};
    for (char x : s)
    {
        a[x]++;
    }
    char res;
    int fre = 0;
    for (int i = 0; i < 256; i++)
    {
        if (a[i] > fre)
        {
            fre = a[i];
            res = (char)(i);
        }
    }
    cout << (char)(res) << endl;
    // Map
    string s1;
    getline(cin, s1);
    map<char, int> mp;
    for (char x : s1)
    {
        mp[x]++;
    }
    char res;
    int fre = 0;
    for (auto it : mp)
    {
        if (it.second > fre)
        {
            fre = it.second;
            res = it.first;
        }
    }
    cout << res << endl;
    return 0;
}