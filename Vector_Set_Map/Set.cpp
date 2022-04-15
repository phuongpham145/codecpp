#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    // Them phan tu
    s.insert(100);
    s.insert(200);
    s.insert(300);
    s.insert(100);
    s.insert(200);
    cout << s.size() << endl;
    // Tim kiem
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }
    if (s.count(5) != 0)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    if (s.find(5) != s.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    // Xoa
    s.erase(100);
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << *s.begin() << " " << *s.rbegin() << " ";
    for(auto x : s){
        cout << x << " ";
    }
    for(set<int>::iterator x = s.begin(); x != s.end(); ++x){
        cout << *x << " ";
    }
    // String
    int n; cin >> n;
    set<string> s1;
    cin.ignore();
    for(int i = 0; i < n; ++i){
        string str;
        getline(cin, str);
        s1.insert(str);
    }
    cout << s1.size() << endl;
    for(string x : s1){
        cout << x << endl;
    }
    return 0;
}