#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    string t = s;
    reverse(s.begin(), s.end());
    if(s != t) return false;
    for(char x : s){
        if(x % 2 == 1) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}