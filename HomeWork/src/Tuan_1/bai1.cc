#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    string s; cin >> s;
    char ch; cin >> ch;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == ch) v.push_back(i);
    }

    for(int k: v) cout << k << " ";

    return 0;
}