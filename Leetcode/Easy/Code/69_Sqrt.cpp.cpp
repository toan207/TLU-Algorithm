#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
		int sqrt_v=1;
		long long s;
		if (x==0) return 0;
        else{
			for (int i=0;i<x;i++){
				s=(long long)i*i;
				if (s>x){
					sqrt_v=i-1;
					break;
				}
			}
		return sqrt_v;
		}
    }   
};

int main() {
	int x;
	cin>>x;
	Solution a;
	cout<<a.mySqrt(x);
} 
