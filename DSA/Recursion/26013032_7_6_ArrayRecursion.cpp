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

int ArrSum(int *arr,int n){
    if(n==0)return arr[n];
    return arr[n]+ArrSum(arr,n-1);
}

int LinearSearch(int arr[],int key,int size){
    if(size==0)return false;
    if(arr[0]==key)return true;
    else return LinearSearch(arr+1,key,size-1);
}

int BinarySearch(int arr[],int key,int l,int r){
    // return index
    int m = (l+r)/2;
    if(arr[m]==key)return m;
    else if(arr[m]<key) return BinarySearch(arr,key,m+1,r);
    else return BinarySearch(arr,23,l,m-1);
    return -1;
}

int main() {
    // cin >> n;
    // int arr[n];
    
    int n = 5;
    int arr[5] = {5,8,3,23,12};

    cout << LinearSearch(arr,23,n);

    // cout << BinarySearch(arr,23,0,n-1);

    

    return 0;
}