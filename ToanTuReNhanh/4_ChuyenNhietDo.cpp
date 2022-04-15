/*
Chuyển đơn vị đo C và F
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    double f = (float)c * 9 / 5 + 32;
    cout << fixed << setprecision(2) << f << endl;
    return 0;
}