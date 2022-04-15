/*
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a.
Chú ý không dùng vòng lặp và các hàm có sẵn.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a + b - 1) / b * b << endl;
    return 0;
}