class Solution {
public:
    string sortSentence(string s) {
        int i=0;//chạy s từ vị trí đầu tiên 
        vector<string> v(11,""); //tạo vector v để lưu vị trí các chuỗi
        while(i<s.size()){
            while(s[i]==' '){i++;}//bỏ qua khoảng trắng nếu có
            string t="";//tạo xâu t để lưu từ cần thêm, sau khi thêm t vào vector v thì khởi tạo lại t=""
            while((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                //khi s[i] là chữ thì liên tục thêm s[i] vào xâu t
                t+=s[i];
                i++;
            }
            //khi gặp số(tức là hết 1 từ) sẽ thêm từ đó vào vector v tại vị trí i(i chính là số ở sau từ)
            if(s[i]>='0' && s[i]<='9'){v[s[i]-'0']+=t+" ";}//" " là khoảng cách sau mỗi từ
            i++;
        }
        string temp=""; 
        //tạo 1 xâu rỗng để lưu lại các từ đã được đặt đúng vị trí ở v thành 1 câu
        for(int j=1;j<=10;j++){
            temp+=v[j];
        }
        temp.pop_back(); //Bỏ 1 kí tự trắng ở cuối câu vì cộng ở dòng 15 thừa 1 kí tự trắng
        return temp;
    }
};