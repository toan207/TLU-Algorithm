/*
Thái được giao nhiệm vụ tiêu diệt lũ yêu quái ngoài hành tinh 
đang có âm mưu xâm lược Trái Đất. Thế nhưng chỉ huy chỉ cho 
Thái 1 khẩu súng có x viên đạn giống nhau, mỗi viên có sát thương
là k. Địch rất đông nên Thái chỉ có thể tiêu diệt làm sao nhiều 
yêu quái nhất có thể. Biết rằng có n tên yêu quái, mỗi tên có HP
khác nhau và Thái biết được HP của mỗi tên và bắn bách phát bách trúng =))
Dù HP còn nhỏ hơn k thì vẫn phải mất 1 viên nữa để tiêu diệt.
Vậy Thái có thể tiêu diệt được tối đa bao nhiêu tên yêu quái.

Input Format

Dòng 1: Số lượng viên đạn: x, sát thương mỗi viên: k.
Dòng 2: Số lượng yêu quái: n.
Dòng 3: HP mỗi tên yêu quái.

Constraints
x,n là số nguyên dương.
k và HP mỗi tên là số thực > 0;

Output Format
Dòng 1: Số lượng yêu quái tối đa có thể tiêu diệt được.
Nếu CÒN ĐẠN, in ra số đạn còn lại ở DÒNG 2.



10 2
5 
1 3 7 8 2

1 2 3 7 8
soviendan = soviendan - ceil(1/2);
Đầu tiên: sắp xếp
*/

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	int soviendan, n;
	double satthuong;
	cin >> soviendan >> satthuong >> n;

	double hp[n];
	//Nhập HP
	for (double&x : hp) cin >> x;
	// Sắp xếp để tiêu diệt được nhiều nhất
	sort(hp, hp + n);

	int count = 0;

	int i = 0;
	/*Có 2 trường hợp để dừng vòng lặp:
	HP tên cuối cùng = 0 hoặc khi hết đạn.
	*/
	while( hp[n-1] != 0 && soviendan > 0){
		soviendan = soviendan - ceil(hp[i]/satthuong);

		if (soviendan >= 0){
			count ++;
			hp[i] = 0;
			i++;
		}
	}
	cout << count;
	
	if (soviendan>0) cout << endl << soviendan;
}