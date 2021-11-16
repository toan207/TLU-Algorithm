#include<iostream>
#include<vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();
        for(int i =0; i < n -1; i++) {
            for( int k = i + 1; k < n; k++ ){
                if (nums[i] + nums[k] == target) {
                    v.push_back(i);
                    v.push_back(k);
                }
            }  
        }
            return v;
    }

int main() {
    int x;
    cin >> x;
   vector<int> nums(x);
   for (int u = 0; u < x; u++) {
        cin >> nums[u];
   }
    
    int a;
    cin >> a;
    vector<int> result = twoSum (nums,a);
    for(int i = 0; i < result.size()-1; i+= 2) {
        cout << result[i] <<" "<< result[i+1] << endl;
        
    }
    return 0;

}