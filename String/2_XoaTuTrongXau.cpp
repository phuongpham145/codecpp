#include <bits/stdc++.h>
using namespace std;
void useVector(string s)
{
    string word;
    cin >> word;
    stringstream ss(s);
    string token;
    vector<string> v;
    while (ss >> token)
    {
        v.push_back(token);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        if (i != v.size() - 1)
            cout << " ";
    }
}
int main()
{
    string s;
    getline(cin, s);
    string word;
    cin >> word;
    stringstream ss(s);
    string token;
    while (ss >> token)
    {
        if (token != word)
        {
            cout << token << " ";
        }
    }
    return 0;
}