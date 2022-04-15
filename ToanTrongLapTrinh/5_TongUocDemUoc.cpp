#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt = 0;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt += 2;
        }
    }
    int c = sqrt(n);
    if (c * c == n)
        --cnt;
    return cnt;
}
int count2(int n)
{
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        res *= (cnt + 1);
    }
    if (n != 1)
        res *= 2;
    return res;
}
int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                sum += i + n / i;
            }
            else
                sum += i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << count(n) << endl;
    cout << Sum(n) << endl;
    return 0;
}