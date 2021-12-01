class Solution {
public:
    bool isHappy(int n) {
        while (n > 4) {
            int b = n;
            int c = 0;
            while (b) {
                c += pow(b%10,2);
                b /=10;
            }
            n = c;
        }
        if (n == 1) return true;
        return false;
    }
};