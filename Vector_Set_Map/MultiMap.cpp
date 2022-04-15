#include <bits/stdc++.h>
using namespace std;
int main(){
    multimap<int, int> mp;
    mp.insert({1, 100});
    mp.insert({2, 200});
    mp.insert({1, 200});
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << mp.count(1) << endl;
    return 0;
}