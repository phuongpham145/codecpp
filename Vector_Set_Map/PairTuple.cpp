#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> v = {100, 200};
    cout << v.first << " " << v.second << endl;
    tuple<int, int, int> t{1, 2, 3};
    cout << get<1>(t) << endl;
    return 0;
}