#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
long long fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int nCK(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return nCK(n - 1, k - 1) + nCK(n - 1, k);
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int biPow(int a, int b)
{
    if (b == 0)
        return 1;
    int x = biPow(a, b / 2);
    if (b % 2 == 1)
        return x * x * a;
    else
        return x * x;
}
int count(int n)
{
    if (n <= 1)
        return 1;
    else
        return 1 + count(n / 10);
}
int palindrome(int a[], int l, int r)
{
    if (l > r)
        return 1;
    if (a[l] != a[r])
        return 0;
    return palindrome(a, l + 1, r - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    cout << fibonacci(92);
    return 0;
}
