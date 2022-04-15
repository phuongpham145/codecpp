/*
Bạn được cung cấp một mảng a có độ dài n.
Bạn cũng được cung cấp một tập hợp các vị trí riêng biệt p1, p2,…, pm, trong đó 1≤pi <n.  Vị trí pi có nghĩa là bạn có thể hoán đổi các phần tử a [pi] và a [pi + 1]. Bạn có thể áp  dụng thao tác này bất kỳ số lần nào cho mỗi vị trí đã cho.
Nhiệm vụ của bạn là xác định xem có thể sắp xếp mảng ban đầu theo thứ tự không giảm  (a1≤a2≤ ⋯ ≤an) chỉ sử dụng các hoán đổi được phép hay không.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos[100] = {0};
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            p[x - 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (pos[i] == 0)
                continue;
            int index = 1;
            while (index < n && pos[index])
            {
                ++index;
            }
            sort(a + i, a + index + 1);
            i = index;
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}