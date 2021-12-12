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
        if(i==0 || v[i] != v[i-1]) {
            int l=i+1, r=n-1;
            int t1 = -v[i];
            // -v[i] < v[l] + v[r];
            while(l<r) {
                int t2 = v[l] + v[r];
                if(t1 == t2)  {
                    res.push_back( {v[i], v[l++], v[r--]});
                   // l++; r--;
                    while(l<r && v[l] == v[l-1]) l++;
                    while(l<r && v[r] == v[r+1]) r--;
                }
                else if(t1 > t2) l++;
                else r--;
            }
        }  
    }
    for(vector<int> x: res) {
        for(int k: x) cout << k << " ";
        cout << endl;
    }

    return 0;
} 