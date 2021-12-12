#include <bits/stdc++.h>
using namespace std;
int main(){

    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;

    int s = a3 + b3 + c3;
    int mbonus = s / 60;
    s %= 60;

    int m = a2 + b2 + c2 + mbonus;
    int hbonus = m / 60;
    m %= 60;

    int h = a1 + b1 + c1 + hbonus;

    cout << h << " " << m << " " << s;

    return 0;
}