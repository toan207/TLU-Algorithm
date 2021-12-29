// Hôm nay Tiến học về ước chung lớn nhất, thầy giáo dạy Tiến về giải thuật Euclid để tính ucln của 2 số, 
// Tiến chợt nảy ra suy nghĩ "vậy muốn tính ucln của N số thì làm thế nào". 
// Nghĩ mãi ko ra nên nhờ bạn tính giúp

// Input Format

// Dòng 1 chứa số nguyên dương n
// Dòng 2 chứa các phần tử cần tính ucln

// Constraints

// 3<= n <= 10^6
// |a[i]| <= 10^9

// Output Format

// Ucln của dãy số

#include <bits/stdc++.h>
using namespace std;

long long ucln(long long a, long long b){

    long long r;
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(){

    long long n, uoc;
    
    cin >> n;

    vector <int> a(n);

    for(int i = 0; i < n; i++){

        cin >> a[i];

        if(i == 0){

            uoc = a[i];
            continue;
        }

        if (uoc == 1) break;

        uoc = ucln(uoc,a[i]);
    }

    cout << uoc;

    return 0;
}