#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int h=m+n-2;
        int k=min(n,m)-1;
        long long C=1;

        for(int i=1;i<=k;i++){ //Tinh to hop chap k cua h
            C*=h;
            C/=i;
            h--;
        }
        return C;
    }
};

int main(){
    int m,n; 
    cin>>m>>n;
    Solution a;
    cout<<a.uniquePaths(m,n);
}