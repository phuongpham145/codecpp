#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int ans = INT_MIN;
    int sum = 0;
    for(char x : s) {
        if(isdigit(x)) {
            sum = sum * 10 + x - '0';
        }
        else {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    ans = max(ans, sum);
    cout << ans << endl;
}
int main(){
    string s;
    cin >> s;
    solve(s);
    return 0;
}