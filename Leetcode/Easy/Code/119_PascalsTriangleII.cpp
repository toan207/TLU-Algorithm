#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>v;
        int a[35][35];
        a[0][0]=1;
        a[1][0]=1;
        a[1][1]=1;
        
        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                a[i][0]=1;
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                a[i][i]=1;
            }
        }
        
        for(int i=0;i<=n;i++){
            v.push_back(a[n][i]);
        }
        return v;
    }
};



int main(){
    int n; cin>>n;
    Solution s;
    vector<int> vec= s.getRow(n);
    for (auto v:vec){cout<<v;}
}
