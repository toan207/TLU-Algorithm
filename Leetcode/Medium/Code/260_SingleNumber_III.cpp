class Solution {
public:
    vector<int> singleNumber(vector<int>& n) {
        sort(n.begin(), n.end());
        vector<int> v;
        if (n.size() <= 2) return n;
        if (n[1] != n[0]) v.push_back(n[0]);
        if (n.back() != n[n.size()-2]) v.push_back(n.back());
        if (v.size() <= 1) {
            for (int i = 1; i < n.size()-1; i++) {
                if (n[i] != n[i-1] && n[i] != n[i+1] && n[i] != n.back() && n[i] != n[0]) v.push_back(n[i]);
            }
            return v;
        }
        else return v;
    }
};