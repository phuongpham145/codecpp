#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<string> se;
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word)
    {
        v.push_back(word);
    }
    for (string x : v)
    {
        if (se.find(x) != se.end())
        {
            cout << x << endl;
            break;
        }
        se.insert(x);
    }
    return 0;
}