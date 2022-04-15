/*
Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100).
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nam;
    cin >> nam;
    if (nam <= 0)
    {
        cout << "INVALID PARAMETER" << endl;
    }
    else
    {
        if ((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0)))
        {
            cout << "Nhuan";
        }
        else
        {
            cout << "Khong nhuan";
        }
    }
    return 0;
}