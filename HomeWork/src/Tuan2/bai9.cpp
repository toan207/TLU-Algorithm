/*Bài 9:

Sử dụng thuật toán sắp xếp chọn để sắp xếp n số nguyên theo thứ tự tăng dần.

*/

#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;

	int a[n];

	for (int i =0; i < n; i++){
		cin >> a[i];
	}

	//
	int wall = 0;
	while (wall<=n-2){

		// Tìm min	
		int vtMin = wall;
		int idx = wall+1;

		while (idx < n){

			if (a[idx] < a[vtMin]){
				vtMin = idx;
			}
			idx++;
		}
		//Hoán đổi phần tử nhỏ nhất trong dãy chưa sắp xếp về bên phải wall
		swap(a[wall], a[vtMin]);

		// Dịch bức tường
		wall++;
	}
	

	for (int i : a){
		cout << i << " ";
	}

}