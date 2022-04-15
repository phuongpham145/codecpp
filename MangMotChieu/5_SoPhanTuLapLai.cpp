/*
Cho mảng A[] gồm N phần tử.
Hãy đếm số phần tử bị lặp lại ít nhất 1 lần.
Ví dụ với mảng  A[] = {5, 6, 1, 2, 1, 4} thì ta có đáp án là 2 vì có 2 phần tử 1.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] >= 2)
                ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}