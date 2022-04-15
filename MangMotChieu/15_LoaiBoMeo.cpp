/*
Như bạn biết Nam là một người rất yêu mèo, bởi vậy trong nhà anh ấy cũng nuôi rất nhiều mèo với những màu sắc rất khác nhau. 
Vào một ngày đẹp trời nọ, Nam tập hợp N con mèo của mình thành một hàng ngang, và cảm thấy rất ngứa mắt vì màu sắc của chúng 
là khác nhau. Bởi vậy, anh ta muốn loại bỏ một số ít nhất những con mèo ra khỏi hàng để những con mèo còn lại có màu giống nhau. 
Mỗi bước loại bỏ, Nam sẽ yêu cầu con mèo ở ngoài cùng bên trái hoặc ngoài cùng bên phải rời khỏi hàng ngang. 
Hãy giúp Nam tính xem anh ta sẽ phải loại bỏ bao nhiêu con mèo ra khỏi hàng ngang.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 1, dem = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                ++dem;
            } else {
                dem = 1;
            }
            res = max(res,dem);
        }
        cout << n - res << endl;
    }
    return 0;
}