/*
Bạn được cung cấp một mảng n số nguyên. Bạn muốn sửa đổi mảng để nó tăng lên, tức là  mọi phần tử đều lớn ít nhất bằng phần tử trước đó.
Trên mỗi lần di chuyển, bạn có thể tăng giá trị của bất kỳ phần tử nào lên một. Số lần di  chuyển tối thiểu cần thiết là bao nhiêu?
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
        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                ans += a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}