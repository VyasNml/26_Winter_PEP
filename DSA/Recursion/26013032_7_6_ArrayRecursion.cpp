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
    if(l>r)return -1;
    int m = l+(r-l)/2;
    if(arr[m]==key){
        return m;
    }else if(arr[m]<key){
        return BinarySearch(arr,key,m+1,r);
    }else{
        return BinarySearch(arr,key,l,m-1);
    }
}

int main() {
    // cin >> n;
    // int arr[n];
    
    int n = 5;
    int arr[5] = {5,8,12,17,20};

    // cout << LinearSearch(arr,23,n);

    
    // int arr[5] = {5,8,12,17,20};
    cout << BinarySearch(arr,17,0,n-1);

    return 0;
}