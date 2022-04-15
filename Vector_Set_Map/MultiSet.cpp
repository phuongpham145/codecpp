#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(100);
    ms.insert(200);
    ms.insert(100);
    ms.insert(200);
    cout << ms.size() << endl;
    for (int x : ms)
    {
        cout << x << endl;
    }
    cout << ms.cout(100) << endl;
    ms.erase(100);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (itn &x : a)
        cin >> x;
    multiset<int> ms1;
    for (int i = 0; i < k; i++)
    {
        ms1.insert(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        cout << *ms1.rbegin() << " ";
        ms1.erase(ms1.find(a[i - k]));
        ms1.insert(a[i]);
    }
    cout << " " << *ms1.rbegin() << endl;
    return 0;
}