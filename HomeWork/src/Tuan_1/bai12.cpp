#include <bits/stdc++.h>

using namespace std;

int main(){
	int tienHienCo, VMongMuon;
	cin >> tienHienCo >> VMongMuon;

	int soGB; 
	cin >> soGB;
	int giaGB, vGB;
	for (int vitri = 1 ; vitri <= soGB; vitri++){
		cin >> giaGB >> vGB;
		if (giaGB <= tienHienCo && vGB >= VMongMuon){
			cout << vitri << endl;
		}
	}
	return 0;
}
