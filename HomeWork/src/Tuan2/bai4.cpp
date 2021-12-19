// Tiến đi mua kẹo để tặng crush. Cho biết Tiến có N xu và muốn mua K cái kẹo, biết giá mỗi cái kẹo là C xu. 
// Tính xem Tiến có đủ tiền mua không (Y/N), nếu không thì thiếu bao nhiêu xu? 
// Vd: Input: 10 10 1 Out: Y 
//     Input: 5 10 2 Out: N 15

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, k, c;

    cin >> n >> k >> c;

    int tong = k * c;

    if(n >= tong) cout << "Y";

    else{
        cout << "N " << tong - n;
    }

    return 0;
}