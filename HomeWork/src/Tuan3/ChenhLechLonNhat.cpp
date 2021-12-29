// Tô Minh cầm bảng điểm của các anh em trong nhóm trong sự hài lòng vì ai cũng có ý chí tự học, 
// thì đột nhiên nảy ra một bài toán để đố anh em trong nhóm. 
// Đó là, tìm chênh lệch điểm lớn nhất giữa 2 bạn bất kỳ trong nhóm.

// Input Format

// Dòng 1 là số lượng phần tử của mảng a (số thành viên trong nhóm của TM)
// Dòng tiếp theo là n số nguyên tương ứng là các phần tử của mảng a.

// Constraints

// 3 <= n <= 10^5
// 0 <= a[i] <= 10^16

// Output Format

// Giá trị chênh lệch lớn nhất giữa điểm của 2 bạn trong nhóm.

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    long long a[100000];
    long long biggest = 0;
    long long smallest = 1000000000000000000;

    for(int i = 0; i < n; i++){

        cin >> a[i];
        biggest = max(biggest, a[i]);  // hàm max(a,b) trả về số lớn hơn trong 2 số a và b
        smallest = min(smallest, a[i]);  // hàm min(a,b) trả về số nhỏ hơn trong 2 số a và b
    }

    cout << biggest - smallest;

    return 0;
}