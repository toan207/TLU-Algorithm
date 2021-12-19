/*
Chuyển đổi số nguyên dương x sang dạng số nhị phân.
*/
#include <iostream>

using namespace std;

int main(){
	// unsigned long long int : Số nguyên không dấu
	unsigned long long int n;
	cin >> n;
	// s: số nhị phân
	string s = "";

	while (n){
		s = char( n%2 + '0') + s;
		n /= 2;
	}
	cout << s;
}