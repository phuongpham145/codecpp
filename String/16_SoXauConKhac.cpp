#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int cnt[256];
        memset(cnt, 0, sizeof(cnt));
        int dem = 0;
        for (int j = i; j < s.length(); j++)
        {
            if (cnt[s[j]] == 0)
            {
                dem++;
            }
            if (dem == k)
            {
                ++ans;
            }
            if (dem > k)
            {
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC;
    cin >> TC;

    while (TC--)
    {
        solve();
    }
    return 0;
}