#include <bits/stdc++.h>
using namespace std;


int main() { 
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v1<v2) cout << "NO";
    else {
        while(1) {
            x1+=v1; x2+=v2;
            if(x1==x2) {
                cout << "YES"; break;
            }
            else if(x1 > x2) {
                cout << "NO"; break;
            }
        }
    }
    return 0;
}
