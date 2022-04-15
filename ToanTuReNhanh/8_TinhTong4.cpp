/*
Sn = 2 + 4 + 6 + 8 + … + 2*n
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long res = 1ll * n * (n + 1);
    cout << res << endl;
    return 0;
}