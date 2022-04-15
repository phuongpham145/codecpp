#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    v.push_back(40);
    cout << v.size() << endl;
    // Truy cap
    cout << v[0] << endl;
    cout << v[v.size()-1] << endl;
    cout << v.back() << endl;
    // Duyet phan tu
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    for(int x : v){
        cout << x << endl;
    }
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
    for(auto it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }
    // Khai bao co san so luong pha tu
    int n; cin >> n;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }
    string s = "Ngon  ngu   lap  trinh";
    stringstream ss();
    string tmp;
    vector<string> v2;
    while(ss >> tmp){
        v2.push_back(tmp);
    }
    for(string x : v2){
        cout << x << endl;
    }
    return 0;
}