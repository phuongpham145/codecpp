#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    string username;
    getline(cin, username);
    if(mp.find(username) == mp.end()){
        cout << username << endl;
    } else {
        cout << username << mp[username] << endl;
    }
    mp[username]++;
    return 0;
}