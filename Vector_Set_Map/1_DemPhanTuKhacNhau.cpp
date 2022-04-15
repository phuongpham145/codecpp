#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Set
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    // Map
    int n1;
    cin >> n1;
    map<int, bool> mp;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        mp[x] = true;
    }
    cout << mp.size() << endl;
    // Sort
    int n2;
    cin >> n2;
    int a[n2];
    for (int &x : a)
        cin >> x;
    sort(a, a + n2);
    int ans = 1;
    for (int i = 0; i < n2; i++)
    {
        if (a[i] != a[i - 1])
            ++ans;
    }
    cout << ans << endl;
    return 0;
}