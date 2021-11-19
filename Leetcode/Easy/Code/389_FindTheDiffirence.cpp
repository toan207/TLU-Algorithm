#include <bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t) {       
        map<char, int> m;
        
        for (int i=0; i<t.size(); i++){
            m[t[i]]++;
        }
        
        for (int i=0; i<s.size(); i++){
            m[s[i]]--;
        }
        
        
        
        char c;
        for (auto i:m){
            if (i.second != 0){
                c = i.first;
                break;
            }
        }
        
        return c;
    }

int main(){
    string s = "abcdef";
    string t = "abxcdef";

    cout << findTheDifference(s,t);
    return 0;
}