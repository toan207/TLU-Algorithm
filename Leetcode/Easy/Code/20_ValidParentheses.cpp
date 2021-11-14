// https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

class Solution {
public:
    bool checkValidBracket(char x, char y) {
        if (x == ')') return y == '(';
        if (x == ']') return y == '[';
        return y == '{';
    }
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if (!st.empty() && checkValidBracket(s[i], st.top()))
                st.pop();
            else return false;
        }
        return st.empty();
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}