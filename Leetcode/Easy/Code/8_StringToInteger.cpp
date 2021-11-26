#include <iostream>
using namespace std;

#define FOR(a,b,c,d) for(int a = b; a<c; a+=d)

int myAtoi(string& s);

int main(){
    string s;
    getline(cin, s);
    cout << myAtoi(s);
}

int myAtoi(string& s){
    
    long long int intX = 0; //Biến lưu số cần chuyển
    int moc_vitri;          //Mốc vị trí bắt đầu xuất hiện số
    int dauX = 1;           //Xét dấu 
    
    int size_of_string = s.size();

    FOR(i, 0 , size_of_string , 1){
        
        if (s[i] == '-' && (s[i+1]>= '0' && s[i+1] <= '9')){
            dauX = -1;
            moc_vitri = i+1; break;
        }
        if (s[i] == '+' && (s[i+1]>= '0' && s[i+1] <= '9')){
            moc_vitri = i+1; break;
        }
        if (s[i]>= '0' && s[i] <= '9'){
            moc_vitri = i;
            break;
        }
        if (s[i] == ' '){
            s.erase(s.begin()+i);
            size_of_string-- ;
            i-- ;
        }
        else return 0;
    }
    //Đếm số chữ số xuất hiện
    int count = 0;
    FOR(i, moc_vitri , size_of_string, 1){
        if (s[i] >= '0' && s[i] <= '9'){
            count ++;
        }
        if (s[i] < '0' || s[i] > '9'){
            break;
        }
    }   
    //Kiểm tra xem có số 0 đằng đầu không, nếu có thì xoá, ko thì break;
    FOR(j, moc_vitri, moc_vitri + count,1){
        if (s[moc_vitri] != '0') break;
        else{
            s.erase(s.begin()+moc_vitri);
            j--;
            count --;
        }
    }
    
    //Lon hon kieu int
    if (count >= 11){
        return dauX==1? INT_MAX : INT_MIN;
    }

    else{  
        FOR(i,moc_vitri,moc_vitri+count,1){
            intX = intX*10 + (s[i]-48);
            if (intX > INT_MAX){
                return dauX==1? INT_MAX : INT_MIN;     
            }
        }
    
    }
    
    return dauX==1? intX:-intX;
}