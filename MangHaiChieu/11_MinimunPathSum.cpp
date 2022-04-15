/*
Cho ma trận cỡ nxm bao gồm các số không âm, tìm đường đi với tổng nhỏ nhất từ ô (1, 1) tới ô (m, n). Bạn chỉ
được di chuyển xuống dưới hoặc sang phải
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
        int dp[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                    dp[i][j] = a[i][j];
                else if (j == 0)
                {
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                }
                else if (i == 0)
                {
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] + a[i][j]);
                }
            }
        }
        cout << dp[n - 1][m - 1] << endl;
    }
    return 0;
}