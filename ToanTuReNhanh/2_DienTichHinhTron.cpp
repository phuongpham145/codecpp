/*
Tính chu vi, diện tích hình tròn
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    double chuvi = 2 * 3.14 * r;
    double dienTich = 3.14 * r * r;
    cout << fixed << setprecision(2) << chuvi << " " << dienTich << endl;
    return 0;
}