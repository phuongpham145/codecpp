/*
Cho mảng A[] gồm n phần tử.
Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng
sao cho A[i] = i. Nếu phần tử A[j] của có giá trị khác j,
hãy đưa ghi vào -1. Ví dụ với mảng  A[] = {-1,-1,6,1,9, 3, 2, -1, 4, -1}
ta có kết quả A[] = {-1, 1, 2, 3, 4, -1, 1, -1, -1, 9}.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        map<long long, bool> mp;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mp[x] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[i])
            {
                cout << i << " ";
            }
            else
                cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}