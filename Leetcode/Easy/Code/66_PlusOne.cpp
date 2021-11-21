class Solution {
public:
    int dem = 0;
    vector<int> plusOne(vector<int>& s) {
        for (int i = 0; i < s.size(); i++) {
            if(s[i]== 9) dem++;
        }
        if(dem == s.size()) {
            s.push_back(0);
            s[0]=1;
            for (int i = 1; i <s.size(); i++){s[i] = 0;}
        }else
            if (s[s.size()-1] != 9) s[s.size()-1] += 1;
            else{
                for (int i = s.size()-1; i >= 0; i--) {
                    if(s[i] == 9) s[i]= 0;
                    else {
                        s[i] += 1; 
                        break;}
            }
        }
        return s;
    }
};