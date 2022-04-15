/*
Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b;
    cout << tong << " " << hieu << " " << tich << fixed << setprecision(2) << " " << thuong << endl;
    return 0;
}