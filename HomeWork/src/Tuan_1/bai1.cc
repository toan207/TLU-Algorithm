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
    
    if(v.size()==0) cout << -1 << endl; // có thể thay v.size==0 bằng v.empty()
    else {
        for(int k: v) cout << k << " ";
    }

    return 0;
}
