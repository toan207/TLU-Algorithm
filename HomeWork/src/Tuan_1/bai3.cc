// Nhập vào một mảng, tính tổng các phẩn tử chỉ xuất hiện duy nhất một lần trong mảng.

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> m;
    int n; cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i]; // Nhập các phần tử vào vector

    int sum=0;

    for(int k: v) m[k]++;   // duyệt qua lần lượt các phần tử trong vector,
                            // mỗi lần gặp phần tử đó thì tăng thêm 1
                            // => nếu phần tử nào xuất hiện duy nhât 1 lần thì map tại phần tử đó bằng 1
    for(int k: v) 
        if(m[k]==1) sum += k;   // duyệt qua mảng, nếu map tại phần tử nào bằng 1
                                // (tương ứng với chỉ xuất hiện duy nhất một lần) thì cộng thêm vào tổng

    cout << sum << endl;
    return 0;
}