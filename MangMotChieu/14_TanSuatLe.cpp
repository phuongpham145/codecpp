/*
Cho dãy số A[] gồm có N phần tử. 
Các phần tử trong dãy số đều xuất hiện với tần suất  chẵn, 
chỉ có duy nhất 1 số có số lần xuất hiện là số lẻ. 
Nhiệm vụ của bạn là hãy tìm số này.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC; cin >> TC;
    while(TC--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = a[0];
        for(int i = 1; i<n; i++){
            ans ^= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}