#include <bits/stdc++.h>
using namespace std;
int main(){

    long long m, n;

    cin >> m;
    n = m;

    //so nho nhat
    
    long long a = n % 7;
    if(a == 1){
        cout << "10";
        n-=8;
    } 

    else if(a == 2){
        cout << "1";
        n-=2;
    }

    else if(a == 3){
        if(n == 3) cout << "7";
        else{
            cout << "40";
            n-=10;
        }
    }

    else if(a == 4){
        if(n == 4) cout << "4";
        else{
            cout << "20";
            n-=11;
        }
    }

    else if(a == 5){
        cout << "2";
        n-=5;
    }

    else if(a == 6){
        cout << "6";
        n-=6;
    }

    int b = n / 7;

    for(int i=0; i<b; i++) cout << "8";
    cout << endl;

    //so lon nhat

    if(m % 2 == 1){
        cout << "7";
        m-=3;
    }

    for(int i=0; i < m/2; i++){
        cout << "1";
    }

    return 0;
}