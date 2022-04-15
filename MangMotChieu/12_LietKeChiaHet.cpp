/*
Cho mảng một chiều các số nguyên không âm,
đếm các số nguyên dương x > 1 sao cho  tất cả các phần tử trong mảng đều chia hết cho x.
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = gcd(a[i], res);
    }
    if (res == 1)
    {
        cout << "0" << endl;
        continue;
    }
    int ans = 1;
    for (int i = 2; i <= sqrt(res); i++)
    {
        if (res % i == 0)
        {
            ++ans;
            if (i != res / i)
                ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}