#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n;
    if (prime(n))
    {
        cout << "Prime: " << n << endl;
    }
    else
    {
        cout << "No";
    }
    return 0;
}