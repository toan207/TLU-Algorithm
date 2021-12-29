#include <bits/stdc++.h>
using namespace std;

bool nhuan(int n) {
    return (n%400==0 || (n%4==0 && n%100!=0));
}

int main() { 
    int a, b, c;
    cin >> a >> b >> c;
    int sum=0;
    for(int i=1; i<b; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                sum += 31; break;
            case 2: 
                if(nhuan(c)) sum+=29;
                else sum+=28;
                break;
            default:
                sum+= 30;
        }
    }
    cout << sum + a;
    return 0;
}
