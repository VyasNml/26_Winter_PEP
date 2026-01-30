//Recursive Program to check if an Array is sorted

#include <iostream>
using namespace std;

void ArrIn(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void ArrOut(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

bool isSorted(int arr[], int size){
    if(size==0 || size==1)return true;
    if(arr[0]>arr[1])return false;
    return isSorted(arr+1,size-1);
}

int main() {
    // cin >> n;
    // int arr[n];
    
    int n = 5;
    int arr[5] = {5,8,3,23,12};

    cout << isSorted(arr,n);

    

    return 0;
}