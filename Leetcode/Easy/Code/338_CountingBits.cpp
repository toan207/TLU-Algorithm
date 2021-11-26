class Solution {
public:
    vector<int> countBits(int n) {
        int i=0;
        vector<int>v;
        while(i<=n){
            int t=i;
            int d=0;
            while(t!=0){
                if(t&1){d++;}
                t=t>>1;
            }
            v.push_back(d);
            i++;
        }
        return v;
    }
};