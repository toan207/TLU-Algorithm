#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout<<"Nhap chu so muon chuyen: ";
    int n;
    cin>>n;
    string s;
    while(n>= 1000)// nhập số lớn hơn 1000 thì chạy vào đây
    {
        s += "M";// cứ 1 lần 1000 thì nó in ra chữ M
        cout<<" M = 1000"<<endl;
        n -= 1000;// trừ số đó cho 1000, còn số dư
    }
    if( 900 <= n )
    {
        s += "CM"; 
        cout<<" CM = 900"<<endl;
        n -= 900;
    }
    if (500<= n )
    {
        s += "D";
        cout<<" D = 500"<<endl;
        n -= 500;
    }
    if (400 <= n )
    {
        s += "CD";
        cout<<" CD = 400"<<endl;
        n -= 400;
    }
    while(n>=100)
    {
        s += "C";
        cout<<" C = 100"<<endl;
        n -= 100;
    }
    if(90<= n )
    {
        s += "XC";
        cout<<" XC = 90"<<endl;
        n -= 90;
    }
    if(50<= n )
    {
        s += "L";
        cout<<" L = 50"<<endl;
        n -= 50;
    }
    if(40<= n )
    {
        s += "XL";
        cout<<" XL = 40"<<endl;
        n -= 40;
    }
    while(n>= 10)
    {
        s += "X";
        cout<<" X = 10"<<endl;
        n -= 10;
    }
    if (9<= n ) 
    {
        s += "IX";
        cout<<" IX = 9"<<endl;
        n -= 9;
    }
    if (5<= n ) 
    {
        s += "V";
        cout<<" V = 5"<<endl;
        n -= 5;
    }
    if (4 <= n) 
    {
        s += "IV"; 
        cout<<" IV = 4"<<endl;
        n -= 4;
    }
    if (n== 3)
    {
        cout<<" III = 3 "<<endl;
        s += "III";
    }
    if ( n == 2)
    {
        cout<<" II = 2 "<<endl;
        s += "II";
    }
    if ( n ==1 )
    {
        cout<<" I = 1 "<<endl;
        s += "I";
    }
    if ( n == 0 )
    {
        cout<<"  "<<endl;    
    }
    
    cout<<"So do chuyen sang so la ma la: "<<s<<endl;
    return 0;
}
