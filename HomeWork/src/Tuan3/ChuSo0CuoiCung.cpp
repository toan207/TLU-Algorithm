// Tô Minh ôn lại cho anh em trong nhóm kiến thức về vòng lặp, 
// khi dạy đến bài tính giai thừa của một số nguyên thì anh tiến cũng đang trong cuộc meeting 
// trao giải kẹo với điều kiện các bạn phải lập được chương trình 
// tính số chữ số 0 cuối cùng của n! với số nguyên dương n nhập vào từ bàn phím. 
// Hãy giúp thành viên nhóm Tô Minh giành được kẹo của anh Tiến.

// Input Format

// Một số nguyên dương n

// Constraints

// 1 <= n <= 10^9

// Output Format

// Số chữ số 0 cuối cùng của n!

#include <bits/stdc++.h>
using namespace std; 

int main(){

    long long n; 
    cin >> n;

    int dem = 0; 
    
    while(n>=5){

        n = n/5; 
        dem += n; 
    }

    cout << dem; 

   return 0; 
}
