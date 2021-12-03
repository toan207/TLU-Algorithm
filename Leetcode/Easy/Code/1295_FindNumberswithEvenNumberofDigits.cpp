#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int ar = arr[i];
        while (ar>0)
        {
            count++;
            ar/=10;
        }
        if (count%2==0)
        {
            sum++;
        }
    }
    cout << sum;
}