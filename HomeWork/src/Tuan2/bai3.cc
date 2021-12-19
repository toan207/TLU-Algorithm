/*
    (EasyMax): 
    a, Viết chương trình chuyển đổi một chuỗi thành chữ in hoa.
	b, Viết chương trình chuyển đổi một chuỗi thành chữ in thường.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    // chuyển thành chữ hoa
    // for(int i=0; i<s.length(); i++) {
    //     if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    // }

    // chuyển thành chữ thường
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }

    cout << s << endl;

    return 0;
}