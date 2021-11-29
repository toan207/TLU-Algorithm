class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> v;
        int max = 0;
        for (int i = 0; i < arr.size(); i ++) {
            int dem = 0;
            for (int j = i; j < arr.size(); j++) {
                if (arr[i] == arr[j]) dem += 1;
                if (dem > arr[i]) {
                    if(arr[i] == arr[j]) arr[j] = 0;
                }
            }
            if(dem - arr[i]== 0) v.push_back(arr[i]);
        }
        for (int i = 0; i <v.size(); i ++) {
            if (v[i] > max) max = v[i];
        }
        if (v.size() == 0) max = -1;
        return max;
    }
};