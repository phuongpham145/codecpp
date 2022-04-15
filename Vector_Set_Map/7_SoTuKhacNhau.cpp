#include <bits/stdc++.h>
using namespace std;
int main(){
    // Set
    string s;
    getline(cin, s);
    set<string> se;
    stringstream ss(s);
    string word;
    while(ss >> word){
        se.insert(word);
    }
    cout << se.size() << endl;
    // Map
    cin.ignore();
    string s1;
    getline(cin, s1);
    map<string, int> mp;
    stringstream ss(s1);
    string word;
    while(ss >> word){
        mp[word] = true;
    }
    cout << mp.size() << endl;
    return 0;
}