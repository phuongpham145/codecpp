/*
Cho ma trận các số nguyên. Hãy liệt kê các số nguyên tố trong ma trận theo thứ tự xuất
hiện, nếu có số nguyên tố xuất hiện nhiều lần thì chỉ in ra 1 lần duy nhất.
*/
#include <bits/stdc++.h>
using namespace std;
bool nguyenTo(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
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
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (nguyenTo(a[i][j]) && mp[a[i][j]] == 0)
                {
                    cout << a[i][j] << " ";
                    mp[a[i][j]] = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}