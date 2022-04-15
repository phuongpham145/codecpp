#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if (c == 'z' || c == 'Z')
        {
            cout << "a";
        }
        else
        {
            if (c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
            ++c;
            cout << c << endl;
        }
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}