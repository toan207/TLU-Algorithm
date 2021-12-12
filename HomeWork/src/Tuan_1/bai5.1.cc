/*
    Nhập vào một mảng có n phần tử (n>=3). 
    Tìm tất cả các bộ 3 số trong mảng có tổng bằng 0 
    (mỗi bộ 3 in trên 1 dòng, thử nghĩ cách làm ít hơn 3 vòng lặp lồng nhau)
	Input: 	-1,0,1,2,-1,-4
	Output: 	-1  -1  2
                -1   0  1
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end()); 

    vector<vector<int>> res;

    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k = j+1; k<n; k++) {
                if(v[i]+v[j]+v[k] == 0) {
                    res.push_back( {v[i], v[j], v[k]} );
                }
            }
        }
    }

    res.erase(unique(res.begin(), res.end()), res.end());

    for(vector<int> t: res) {
        for(int k: t) cout << k << " ";
        cout << endl;
    }

    return 0;
}