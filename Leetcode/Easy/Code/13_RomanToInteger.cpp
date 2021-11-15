#include <iostream>
using namespace std;

int convert(char x) {
    if(x == 'I') return 1;
    if(x == 'V') return 5;
    if(x == 'X') return 10;
    if(x == 'L') return 50;
    if(x == 'C') return 100;
    if(x == 'D') return 500;
    if(x == 'M') return 1000;
    return -1;
}
    
int romanToInt(string s) {    
    int ans = 0;
    for(int i=0; i<s.length(); i++) {
        if(convert(s[i]) < convert(s[i+1])) {
            ans += (convert(s[i+1]) - convert(s[i]));
            i++;
            continue;
        }
        ans += convert(s[i]);
    }
    return ans;
}

int main() {
    cout << romanToInt("MMII") << endl;
    return 0;
}