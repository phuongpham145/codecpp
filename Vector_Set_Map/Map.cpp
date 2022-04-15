#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    mp[100] = 200;
    mp[200] = 300;
    mp.insert({300, 400});
    mp.insert({400, 500});
    cout << mp.size() << endl;
    for (pair<int, int> x : mp)
        cout << x.first << " " << x.second << endl;
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        cout << (*it).first << " " << (*it).second << endl;
    // Tim key
    if (mp.count(100) != 0)
        cout << "Found\n";
    else
        cout << "Not Found\n";
    if (mp.find(100) != mp.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";
    mp.erase(100);
    map<int, int> mp1;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    map<string, int> mp2;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp2[s]++;
    }
    for(auto it : mp2){
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}