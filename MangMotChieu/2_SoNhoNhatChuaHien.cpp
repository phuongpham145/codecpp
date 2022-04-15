/*
Cho mảng A[] gồm n số nguyên bao gồm cả số 0.
Nhiệm vụ của bạn là tìm số nguyên  dương nhỏ nhất không có mặt trong mảng.
Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết  quả là 2.
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000002];
int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                cnt[x] = 1;
        }
        for (int i = 1; i <= 1000001; i++)
        {
            if (cnt[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}