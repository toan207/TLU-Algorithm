#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int a[10000];
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=n-1; i>0; i--){
        a[i-1] += a[i] / 2;
    }

    cout << a[0];

    return 0;
}