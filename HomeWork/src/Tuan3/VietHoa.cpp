/*
Bỗng một ngày bàn phím của bạn bị liệt nút Shift và Caps Lock nên không 
thể viết hoa được tên riêng hay chữ đầu dòng. Hãy viết 1 chương trình
viết hoa các chữ cái đầu tiên trong mỗi từ được nhập từ bàn phím.

*/

#include <iostream>

using namespace std;

int main(){
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++){
		if ((i == 0 || i > 0 && s[i-1] == ' ') && (s[i] >= 'a' && s[i] <= 'z')){
			s[i] -= 32;
		}
	}
	cout << s;

}
