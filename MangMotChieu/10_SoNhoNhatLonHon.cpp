/*
Cho mảng A[] gồm n phần tử.
Nhiệm vụ của bạn là tìm giá trị nhỏ nhất lớn hơn A[i]
(i=0,  1, 2,.., n-1). Đưa ra ‘_’ nếu A[i]
không có phần tử nhỏ hơn nó. Ví dụ với mảng
A[]  = {13, 6, 7, 12}, ta có kết quả là
{ _ , 7 . 12, 13}.
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> v(a, a + n);
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(v.begin(), v.end(), a[i]);
            if (it == v.end())
            {
                cout << "_";
            }
            else
                cout << (*it) << " ";
        }
        cout << endl;
    }
    return 0;
}