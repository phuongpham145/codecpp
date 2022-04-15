/*
Phần tử được gọi là trung vị của mảng là phần
tử đứng giữa theo thứ tự các phần tử đã  được sắp
xếp trong trường hợp số lượng phần tử của mảng là lẻ hoặc
là phần tử nhỏ hơn  trong 2 phần tử đứng giữa trong trường hợp số
lượng phần tử của mảng là chẵn. Hãy tìm  median của mảng
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        if (n % 2 == 1)
        {
            cout << a[n / 2] << endl;
        }
        else
        {
            cout << a[n / 2 - 1] << endl;
        }
    }
    return 0;
}