#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    sort(a, a + n);
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(binary_search(a, a + n, x)){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    // Set
    int n1; cin >> n1;
    set<int> se;
    for(int i=0; i<n1; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(se.count(x) == 1){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    // Map
    int n2; cin >> n2;
    map<int, bool> mp;
    for(int i=0; i<n2; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(mp.count(x) == 1){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}