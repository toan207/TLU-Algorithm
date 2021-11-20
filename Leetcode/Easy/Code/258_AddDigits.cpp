class Solution {
public:
    int addDigits(int n) {
        while(n>=10){
            int s=0;
            int t=n;
            while(t!=0){
                s+=t%10;
                t=floor(t/10);
            }
            n=s;
        }
        return n;
    }
};