//Cách 1
class Solution {
public:
    double product = 1;
    int arraySign(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            product *= nums[i];
        }
        if(product > 0) return 1;
        else if (product < 0) return -1;
        else return 0;
    }
};
//Cách 2
class Solution {
public:
    int count = 0;
    int count1 = 0;
    int arraySign(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) count += 1;
            if(nums[i] == 0) {
                count1 += 1;
                break;
            }
        }
        if (count1 >= 1) return 0;
        if(count % 2 == 0) return 1;
        else return -1;
    }
};