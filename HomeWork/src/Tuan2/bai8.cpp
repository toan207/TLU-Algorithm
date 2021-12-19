// Tô Minh khoe anh Tiến vừa được học bất đẳng thức tam giác. Anh Tiến đang cọc cằn vì bị crush dỗi nên đố: 
// “Bây giờ anh cho chú 3 số nguyên bất kỳ, chú tính cho anh chi phí nhỏ nhất để biến nó thành 3 cạnh của một tam giác, không thì đi rửa bát” 
// (thêm hoặc bớt 1 đơn vị được coi là 1 chi phí). Anh em hãy giúp Tô Minh không phải rửa bát.
// Đầu vào: 3 số nguyên a, b, c
// Đầu ra: Chi phí nhỏ nhất
// VD:
// 3 5 17	-->  10


#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;

    cin >> a >> b >> c;

    int biggest = max(a, max(b,c));

    int kq = (biggest - (a+b+c - biggest)) + 1;

    if(kq > 0 ) cout << kq;
    else cout << "0";
    
    return 0;
}