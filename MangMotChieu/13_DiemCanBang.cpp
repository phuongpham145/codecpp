/*
Cho mảng một chiều các số nguyên,
hãy liệt kê các chỉ số I trong mảng mà tổng các phần
tử có chỉ số nhỏ hơn I bằng với tổng các phần tử có chỉ số lớn hơn I.
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        long long left = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            sum -= a[i];
            if (sum == left)
            {
                cout << i << " ";
                ok = true;
            }
            left += a[i];
        }
        if (!ok)
            cout << "-1\n";
    }
    return 0;
}