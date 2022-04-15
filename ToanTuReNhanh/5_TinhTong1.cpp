/*
Sn = 1 + 2 + 3 + 4 + … + n
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s = 1ll * n * (n + 1) / 2;
    cout << s << endl;
    return 0;
}