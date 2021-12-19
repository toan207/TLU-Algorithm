/*
    EasyMax: Nhập vào 3 số nguyên a,b,c. Tìm số lớn nhất
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b && a>c) cout << a << endl;
    else if(b>c) cout << b << endl;
    else cout << c << endl;

    return 0;
}
