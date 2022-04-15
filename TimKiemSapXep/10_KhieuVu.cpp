/*
Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2,
..., an. Các bạn nữ có chiều cao là b1, b2, ..., bm. Nhân dịp lễ tổng kết cuối năm, cả
lớp dự định tổ chức buổi khiêu vũ nhưng có điều kiện là trong một đôi khiêu vũ bất
kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia quá 1 đôi khiêu vũ.
Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            ++i;
        else
        {
            ++ans;
            ++i;
            ++j;
        }
    }
    cout << ans << endl;
    return 0;
}