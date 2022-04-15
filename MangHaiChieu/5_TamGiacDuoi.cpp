/*Tổng các phần tử thuộc tam giác dưới của ma trận vuông*/
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
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                sum += a[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}