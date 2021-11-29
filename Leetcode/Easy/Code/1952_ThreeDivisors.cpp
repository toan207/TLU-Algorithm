#include <iostream>
#include <math.h>
using namespace std;

/*
//Cach1
class Solution {
public:
    bool isThree(int n) {
        int dem = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) dem += 1;
            if (dem==2) return false;
        }
        if (dem == 1) return true;
        else return false;
    }
};
*/

//Cach2
class Solution {
public:
    bool isThree(int n) {
        bool check=true;
        if (n==1) return false;
        else if((double)sqrt(n)!=(int)sqrt(n)) return false;
        else{
            for (int i =2;i<=sqrt(sqrt(n));i++){ //Kiem tra so nguyen to
                if ((int)sqrt(n)%i==0) {
                    check=false;
                    break;
                }
            }
            if (check) return true;
            else return false;
        }
    }
};

int main() {
	int x;
	cin>>x;
	Solution a;
	cout<<a.isThree(x);
} 
