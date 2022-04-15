/*
Tìm phần tử lớn nhất trong ma trận và liệt kê các vị trí xuất hiện của nó trong ma trận
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
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                maxVal = max(maxVal, a[i][j]);
            }
        }
        cout << maxVal << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (maxVal == a[i][j])
                    cout << "Vi tri xuat hien : "
                         << "A[" << i + 1 << "][" << j + 1 << "]\n";
            }
        }
    }
    return 0;
}