/*
Cho mảng A[] gồm n số nguyên và số X.
Hãy tìm độ dài dãy con liên tục nhỏ nhất có tổng  lớn hơn X.
Ví dụ với A[] = { 1, 4, 45, 6, 0, 19} và X = 51 ta có câu
trả lời là 3 tương ứng  với dãy con {4, 45, 6}.
Với dãy A[] = {1, 10, 5, 2, 7} và X =9 ta có câu trả lời là 1 tương
ứng với dãy con {10}. Với dãy A[] = {1, 2, 4}và X=8 ta có câu trả lời là -1.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int &x : a)
            cin >> x;
        int left = 0, res = 1e9;
        long long sum = 0;
        for (int r = 0; r < n; r++)
        {
            sum += a[r];
            while (sum > x)
            {
                res = min(res, r - left + 1);
                sum -= a[left];
                ++left;
            }
        }
        if (res == 1e9)
            cout << "-1\n";
        else
            cout << res << "\n";
    }
    return 0;
}