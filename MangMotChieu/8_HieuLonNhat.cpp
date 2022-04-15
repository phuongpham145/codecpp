/*
Cho mảng A[] gồm n số nguyên.
Hãy tìm hiệu lớn nhất của bất kể hai phần tử nào của mảng
dãy con thỏa mãn ràng buộc số lớn hơn xuất hiện sau số nhỏ hơn.
Nếu không tìm được cặp  phần tử của mảng hãy đưa ra -1.
Ví dụ với mảng A[] = {2, 3, 10, 6, 4, 8, 1} ta nhận được
kết quả là 8 = 10-2. Với mảng A[] = {7, 9, 5, 6, 3, 2}
ta có kết quả là 2 = 9-7.
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
            cin >> a[i];
        int min_val = a[0], res = -1e9;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > min_val)
            {
                res = max(res, a[i] - min_val);
            }
            min_val = min(a[i], min_val);
        }
        if (res == -1e9)
            cout << "-1\n";
        else
            cout << res << "\n";
    }
    return 0;
}