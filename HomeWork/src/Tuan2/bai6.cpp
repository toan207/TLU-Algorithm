/*Bài 6:

Vẽ hình chữ nhật rỗng
Input: Nhập 2 số nguyên a, b là độ dài 2 cạnh. (2 < b ≤ a ≤ 100)
Output: Hình chữ nhật với độ dài tương ứng.
“* ” cho vị trí điền cạnh và 2 dấu cách “  ” cho khoảng trống
Input:			Output:
4 3				*  *  *  *
            	*        *
   				*  *  *  *

*/

#include <iostream>

using namespace std;

int main(){
	int a,b;
	// Nhập cho thoả mãn yêu cầu đề bài
	do{
		cin >> a;
	}while (a>100 || a < 3);
	do{
		cin >> b;
	}while (b < 3 || b > a);

	
	for (int i = 1; i <= b; i++){
		for (int j = 1; j  <= a; j++){
			if (i == 1 || i == b || j == 1 || j == a){
				cout << "* ";
			}
			else cout << "  ";
		}
		cout << endl;
	}
}