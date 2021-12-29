// Tiến học dốt nên bị trường đuổi học, 
// trong lúc đang lang thang ko biết làm gì thì chợt nảy ra ý tưởng startup bán dép 2nd hand. 
// Tiến nhập 1 lô dép về, 2 chiếc dép a và -a được xem là 1 đôi (ví dụ dép -3 và 3 là 1 đôi). 
// Tuy nhiên trong lúc kiểm hàng, Tiến nhận ra là có 1 chiếc dép bị lẻ ra 
// nên Tiến sẽ phải nhập thêm 1 chiếc dép K để ghép với chiếc dép bị lẻ đó tạo thành 1 đôi. 
// Tiến cho bạn biết N là số lượng dép trong lô hàng và danh sách dép, hãy giúp Tiến tìm K

// Input Format

// Dòng 1 chứa số nguyên n
// Dòng 2 chứa các "chiếc dép"

// Constraints

// n < 10^6
// a[i] < 10^16

// Output Format

// Chiếc dép bị thiếu

#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    long long a[100000];

    cin >> n;
    long long sum = 0;

    for(int i = 0; i < n; i++){

        cin >> a[i];
        sum += a[i];
    }

    cout << -sum;

    return 0;
}