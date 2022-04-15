#include <bits/stdc++.h>
using namespace std;
void pt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1)
    {
        cout << n << " ";
    }
}
void pt2(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            cout << i << "(" << cnt << ") ";
        }
    }
    if (n != 1)
    {
        cout << n << "(1)" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pt(n);
    return 0;
}