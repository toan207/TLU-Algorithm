#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i=left;i<=right;i++){
            bool check=true;
            int j=i;
            
            while(j!=0){
                int chuso=j%10;
                j/=10;
                
                if (chuso==0){check=false;break;}
                else {
                    if(i%chuso!=0){check=false;break;}
                }
            }
            if(check) v.push_back(i);
        }
        return v;
    }
};

int main(){
    int left,right;
    cin>>left>>right;
    Solution a;
    vector<int> v=a.selfDividingNumbers(left,right);
    for (int value:v) cout<<value<<" ";
    return 0;
}