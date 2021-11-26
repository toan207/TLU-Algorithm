#include<iostream>
#include<cmath>
using namespace std;

int convert(string s){
    int d = s.size(),l = d, result = 0;
    for (int i = 0; i < d; i++){
        result += (s[i] - 'A' + 1) * pow(26, l - 1);
        l--;
    }
    return result;
}

int main(){
    string s;
    cin >> s;
    cout << convert(s);
}