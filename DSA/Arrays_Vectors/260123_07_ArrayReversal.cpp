//https://www.geeksforgeeks.org/problems/reverse-an-array/1

//base case:
/*
input:
5
5 4 3 2 1

output:
1 2 3 4 5
*/
/*
input:
4
4 3 2 1

output:
1 2 3 4
*/

#include <iostream>
using namespace std;

void ArrIn(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void ArrOut(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int* arr, int &n){
    int l=0,r=n-1;
    while(l<r){
        swap(arr[l++],arr[r--]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    ArrIn(arr,n);
    reverse(arr,n);
    ArrOut(arr,n); 

    return 0;
}