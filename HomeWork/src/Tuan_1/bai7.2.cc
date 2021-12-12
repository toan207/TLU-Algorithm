/*
    Có n người xếp hàng mua vé xem phim siêu nhân, trong đó người ở đầu hàng có vị trí là 0 và người ở cuối hàng có vị trí là n-1.
	
    Nhập vào một mảng số nguyên có độ dài n là số lượng vé mọi người muốn mua 
    (mảng tại vị trí i là số lượng vé mà người tại vị trí i muốn mua).
	
    Mỗi người chỉ mất đúng một giây cho mỗi lượt mua vé và mỗi lượt chỉ được mua 1 vé. 
    Nếu chưa mua đủ số vé sẽ quay lại xếp ở cuối hàng. Nếu đã đủ số vé cần mua thì người đó sẽ rời khỏi hàng.

    Nhập vào vị trí k và in ra thời gian mà người ở vị trí k cần để mua đủ số vé.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int k; cin >> k;
    int time = 0;

    for(int i=0; i<n; i++) {
        int t = min(v[i], v[k]);
        if(i>k && t == v[k]) t--;
        time += t;
    }
    cout << time << endl;

    return 0;
}

