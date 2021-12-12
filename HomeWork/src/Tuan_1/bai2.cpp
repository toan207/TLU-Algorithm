#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	int countSoAm = 0;
	long long int tich = 1;
	for (int i = 0 ; i < n; i++){
		cin >> a[i];
		if (a[i] < 0) countSoAm++;
	}
	sort(a,a+n);
	if (countSoAm % 2) countSoAm--;

	int i = 0;
	while (i < countSoAm){
		tich*= a[i];
		i++;
	}
	while (i < n){
		if (a[i] > 0) tich *= a[i];
		i++;
	}
	cout << tich;
	return 0;
}

/*
9 2 -2 -5 -1 0
-5 -2 -1 0 2 9
*/