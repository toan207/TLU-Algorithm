// Tô Minh và anh Tiến chơi cờ tỉ phú nhưng luật rừng. 
// Nhà của Tô Minh và anh Tiến trên bản đồ cách nhau n mét. 
// Tô Minh chỉ có 2 cách để di chuyển quân cờ từ nhà Tô Minh đến nhà anh Tiến, 
// hoặc là nhảy ngắn a mét, hoặc là nhảy dài b mét. 
// Vậy quân cờ của Tô Minh cần ít nhất bao nhiêu bước để đến nhà anh Tiến 
// (nếu không có cách đến nhà anh Tiến thì in ra -1)

// Đầu vào: Lần lượt n, a, b (1 < n < 105;  1 < a < b < 105)
// Đầu ra: Số bước ít nhất
// VD:
// 10 3  4	--> 3


#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, a, b;
    cin >> n >> a >> b;

    if(n % b == 0){cout << n/b;}
    
    else{
        int dem = 0;

        while( (n > 0) && (n % b != 0) ){

            n -= a;
            dem++;
        } 

        if( n < 0 ) cout << "-1";

        else if(n == 0) cout << dem;
        
        else cout << dem + (n / b);
    }
    return 0;
}