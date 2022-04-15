/*
Cho mảng A[] gồm n số và số nguyên dương k.
Hãy tìm dãy con liên tục độ dài k có giá trị
trung bình các phần tử lớn nhất.
Ví dụ với A[] = { 1, 12, -5, -6, 50, 3} và k = 4
ta có câu trả  lời là {12, -5, -6, 50} có trung bình các phần tử lớn nhất là (12-5-6+30)/4=7.75.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i];
        int res = sum, idx = 0;
        for (int i = k; i < n; i++)
        {
            sum = sum - a[i - k] + a[i];
            if (sum > res)
            {
                res = sum;
                idx = i - k + 1;
            }
        }
        for (int i = 0; i < k; i++)
            cout << a[idx + i] << " ";
        cout << endl;
    }
}