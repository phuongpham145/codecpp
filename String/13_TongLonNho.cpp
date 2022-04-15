#include <bits/stdc++.h>
using namespace std;
void maxVal(string a, string b)
{
    for (char &x : a)
    {
        if (x == '5')
            x = '6';
    }
    for (char &x : b)
    {
        if (x == '5')
            x = '6';
    }
    cout << stoll(a) + stoll(b) << endl;
}
void minVal(string a, string b)
{
    for (char &x : a)
    {
        if (x == '6')
            x = '5';
    }
    for (char &x : b)
    {
        if (x == '6')
            x = '5';
    }
    cout << stoll(a) + stoll(b) << " ";
}
int main()
{
    string a, b;
    cin >> a >> b;
    minVal(a, b);
    maxVal(a, b);
    return 0;
}