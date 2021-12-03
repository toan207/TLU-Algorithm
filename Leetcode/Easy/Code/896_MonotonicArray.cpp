#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void check(int arr[],int n){
    int sum1 = 1;
    int sum2 = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>= arr[i+1]){
            sum1++;
        }
        if(arr[i]<=arr[i+1]){
            sum2++;
        }
    }
    if(sum1==n || sum2==n){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    check(arr,n);
}