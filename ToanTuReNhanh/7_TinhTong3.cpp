/*
1/1∗2 + 1/2∗3 + 1/3∗4 + ….. + 1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double s = 1 - 1.0 / (n + 1);
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}