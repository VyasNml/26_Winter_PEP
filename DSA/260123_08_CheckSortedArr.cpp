//https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
//base case:
/*
5
10 20 30 40 50
*/
#include <iostream>
using namespace std;

void ArrIn(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int isSorted(int *arr,int n) {
    if(n<=1)return true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    cout << isSorted(arr,n);

    return 0;
}