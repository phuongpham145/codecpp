#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Set
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
        cin >> x;
    set<int> se;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    bool ok = true;
    for (int x : a)
    {
        if (se.find(x) == se.end())
        {
            cout << x << " ";
            ok = true;
        }
    }
    if (!ok)
        cout << "Not Found\n";
    else
        cout << endl;
    // Map
    int n1, m1;
    cin >> n1 >> m1;
    int a1[n1], b1[m1];
    for (int &x : a1)
        cin >> x;
    map<int, bool> mp;
    for (int i = 0; i < m1; i++)
    {
        int x;
        cin >> x;
        mp[x] = true;
    }
    bool ok = false;
    for (int x : a1)
    {
        if (mp.find(x) == mp.end())
        {
            cout << x << " ";
            ok = true;
        }
    }
    if (!ok)
        cout << "Not Found\n";
    else
        cout << endl;
    return 0;
}