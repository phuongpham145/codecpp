/*
Cho ma trận N * M. Tìm tổng đường dẫn lớn nhất trong ma trận. Đường dẫn tối đa là tổng
của tất cả các phần tử từ hàng đầu tiên đến hàng cuối cùng mà bạn chỉ được phép di
chuyển xuống hoặc theo đường chéo sang trái hoặc phải. Bạn có thể bắt đầu từ bất kỳ
phần tử nào trong hàng đầu tiên.
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
        int a[500][500];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j + 1]);
                }
                else if (j == m - 1)
                {
                    a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
                }
                else
                {
                    a[i][j] += max(a[i - 1][j], max(a[i - 1][j - 1], a[i - 1][j + 1]));
                }
            }
        }
        cout << *max_element(a[n - 1], a[n - 1] + m) << endl;
    }
    return 0;
}