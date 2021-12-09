class Solution {
public:
    bool reorderedPowerOf2(int n) {
        //tạo vector lưu các số có dạng 2^i
        vector<string> power;
        for(int i=0;i<=30;i++){
            int t=pow(2,i);
            power.push_back(to_string(t));
        }
        
        //sắp xếp các kí tự của từng chuỗi trong vector
        for(int i=0;i<=30;i++){
            sort(power[i].begin(),power[i].end());
        }
        
        //sắp xếp các chữ số của n
        string s=to_string(n);
        sort(s.begin(),s.end());
        
        //tìm n trong vector power
        for(int i=0;i<=30;i++){
            if(s==power[i]){return true;}
        }
        return false;
    }
};