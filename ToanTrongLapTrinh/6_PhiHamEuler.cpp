#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y){
    if(y == 0) return x;
    return gcd(y, x % y);
}
long long count(long long n){
    long long res = 0;
    for(int i = 1; i <= n; i++){
         if(gcd(i, n) == 1)
         ++res;
    }
    return res;
}
#define ll long long
ll phi(ll n){
    ll res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            res -= res/i;
        }
    }
    if(n != 1){
        res -= res/n;
    }
    return res;
}
int main(){
     long long a;
     cin >> a;
     cout << count(a) << endl;
     cout << phi(a) << endl;
     return 0;
}