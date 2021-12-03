class Solution {
public:
    int reverse(int x) {
        long long int rv = 0;
        while (x){
            rv = rv*10 + (x%10);
            if (rv > INT_MAX || rv < INT_MIN) return 0;
            x /= 10;
        }
        return rv;
    }
};