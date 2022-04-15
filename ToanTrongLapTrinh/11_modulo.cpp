#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long res = 1;
    for(int i = 0; i < n; i++){
        res *= a[i];
        res %= 5;
    }
    cout << res << endl;
    return 0;
}