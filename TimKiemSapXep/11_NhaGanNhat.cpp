/*
Trên một con đường mới mở đã xuất hiện lác đác một số căn nhà vừa xây xong.
Người ta đánh địa chỉ bằng cách tính khoảng cách từ vị trí của căn nhà đến đầu
đường theo đơn vị mét. Biết địa chỉ các căn nhà, hãy tìm khoảng cách giữa hai nhà
gần nhau nhất.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    sort(a, a + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, a[i] - a[i - 1]);
    }
    cout << res << endl;
    return 0;
}