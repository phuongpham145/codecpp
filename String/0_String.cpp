#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Nhap xuat
    string s, c;
    cin >> s;
    cin.ignore(1);
    getline(cin, c);
    // Truy cap nhu mang
    cout << s[1] << endl;
    cout << s.length() << endl;
    cout << c.size() << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }
    for (char x : c)
    {
        cout << x << endl;
    }
    // Noi xau
    string d = s + c;
    cout << d << endl;
    // so sanh
    if(s > c){
        cout << "S lon hon C\n";
    } else if(s == c){
        cout << "S bang C\n";
    } else {
        cout << "S nho hon C";
    }
    cout << a.compare(b) << endl;
    // Cat chuoi
    string b = c.substr(2, 4);
    string number = "1234";
    int x = stoi(number);
    string x1 = to_string(x);
    //Tach tu
    string s = "Pham      Van  Phuong";
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp){
        ++cnt;
        cout << tmp << endl;
    }

    return 0;
}