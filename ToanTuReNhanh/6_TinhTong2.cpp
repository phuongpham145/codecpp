/*
Sn = 12 + 22 + 32 + 42 + 52 + … + n2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s = n * (n + 1) * (2 * n + 1) / 6;
    cout << s << endl;
    return 0;
}