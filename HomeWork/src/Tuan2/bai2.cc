/*
    (EasyMax): Nhập vào một năm, kiểm tra năm có có phải năm nhuận không. 
    Biết năm nhuận là năm chỉ hết cho 400 hoặc chi hết cho 4 nhưng không chia hết cho 100
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int year; cin >> year;

    if(year%400 == 0 || year%4 == 0 && year%100 != 0)  cout << year << " la nam nhuan\n";
    else cout << year << " khong phai nam nhuan\n";

    return 0;
}