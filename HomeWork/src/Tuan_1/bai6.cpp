#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);

	int size1 = s1.size();
	int size2 = s2.size();

	bool check = true;
	for (int i = 0; i <= size1 - size2; i++){
		if (s1[i] == s2[0]){
			for (int j = 1; j < size2; j++){
				if (s2[j] != s1[i+j]) break;
				if (j == size2-1){
					check = false;
				}
			}
		}
	}

	if (check){
		cout <<"No";
	}
	else{
		cout << "Yes";
	}
	return 0;
}
