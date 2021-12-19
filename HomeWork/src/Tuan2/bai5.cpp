// Tiến tặng crush kẹo nhưng crush không thích, đòi bánh kem cơ, mà phải bánh kem nhiều tầng. 
// Biết giá của 1 chiếc bánh kem tính như sau: tầng 1 giá 1 xu, tầng 2 giá 2 xu... tầng N giá N xu. 
// Tiến nhận thấy mình chỉ còn K xu, hãy tính xem chiếc bánh kem to nhất Tiến có thể mua có bao nhiêu tầng 
// Vd: Input: 60 Out: 10

#include <bits/stdc++.h>
using namespace std;
int main(){

    int k;

    cin >> k;

    float kq = (-1 + sqrt(1 + 8 * k)) / 2;

    cout << floor(kq);

    return 0;
}