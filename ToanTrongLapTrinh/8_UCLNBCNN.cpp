#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
    if(a == 0 || b == 0) return a + b;
    while(a != b){
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a;
}
ll lcm(ll a, ll b){
    return a / gcd(a, b)*b;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}