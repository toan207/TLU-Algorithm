#include <bits/stdc++.h>
using namespace std;

string Tobin(int x){
    string S = "";
    while (x > 0){
        S = to_string(x % 2) + S;
        x /= 2;
    }
    return S;
}
 
int main(){
    int x,y;
    cin >> x >> y;

    string S1 = Tobin(x);
    string S2 = Tobin(y);

    while(S1.size() < S2.size()) S1.insert(0,"0");
    while(S2.size() < S1.size()) S2.insert(0,"0");

    int t=S1.size();
    int dem =0;
    for(int i=0; i<t; i++){
        if(S1[i] != S2[i]) dem++;
    }
    cout << dem;
    return(0); 
}