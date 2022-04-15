/*
ZS the Coder đang mã hóa trên một máy tính điên. Nếu bạn không gõ một từ trong
một giây liên tiếp, mọi thứ bạn gõ sẽ biến mất!
Nếu bạn gõ một từ ở giây thứ a và sau đó là từ tiếp theo ở giây b, thì nếu b - a ≤ c, chỉ từ mới được thêm vào các từ khác trên màn hình. Nếu b - a> c, thì mọi thứ trên màn hình sẽ biến mất và sau đó từ bạn đã gõ sẽ xuất hiện trên màn hình. Ví dụ: nếu c = 5 và bạn đã gõ các từ ở giây 1, 3, 8, 14, 19, 20 thì ở giây thứ 8 sẽ có 3 từ trên màn hình. Sau đó, mọi thứ biến mất vào giây thứ 13 vì không có gì được gõ. Ở giây 14 và 19, hai từ khác được gõ và cuối cùng, ở 20 giây thứ hai, một từ nữa được gõ và tổng cộng 3 từ vẫn còn trên màn hình
Bạn được cung cấp thời gian khi ZS gõ các từ. Xác định có bao nhiêu từ vẫn còn trên màn hình sau khi anh ta gõ xong mọi thứ.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int &x : a)
            cin >> x;
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - a[i - 1] <= c)
            {
                ++cnt;
            }
            else
                cnt = 1;
        }
        cout << cnt << endl;
    }
    return 0;
}