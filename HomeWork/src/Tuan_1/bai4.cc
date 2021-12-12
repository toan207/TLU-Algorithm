/*
    Nhập vào một số nguyên n (1<=n<=10^5), 
    tìm hiệu giữa tích các chữ số và tổng các chữ số của n
	Ví dụ: input = 234
    output=15  vì (2*3*4 – 2+3+4 = 15) 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; cin >> a;
    int tong=0,
        tich = 1;
    while(a>0) {
        tong += a%10;    // ở mỗi lần lặp ta chia lấy dư cho 10 để lấy lần lượt từng chữ số
        tich *= a%10;

        a /= 10;
    }
    cout << tich - tong << endl;
    return 0;
}