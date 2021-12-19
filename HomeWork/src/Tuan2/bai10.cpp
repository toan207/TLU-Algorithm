// Tiến chăm chú ngắm nhìn crush ăn bánh kem, vô tình phát hiện ra tầng bánh kem i có a[i] quả cherry. 
// Tiến cho bạn biết dãy số gồm N số là lượng cherry ở mỗi tầng bánh, đố bạn tìm ra số lượng cherry nào xuất hiện ít lần nhất và nhiều lần nhất 
// (input đảm bảo chỉ có 1 cặp giá trị thoả mãn)
// Vd: 	
// Input: 6 
//        3 1 2 3 3 2
// Out: 1 3 


#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, nhonhat, lonnhat;
    int a[10000];
    int b[10000];
    fill_n(b,10000,0);

    int min = 10000;
    int max = 0;

    cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
        b[a[i]] ++;   //lùa bò vào chuồng

        if(max < b[a[i]]){
            lonnhat = a[i];
            max = b[a[i]];
        }

        if(min > b[a[i]]){
            nhonhat = a[i];
            min = b[a[i]];
        }

    }

    cout << nhonhat << " " << lonnhat;    

    return 0;
}