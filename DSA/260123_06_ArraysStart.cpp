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

void ArrOutRev(int *arr,int &n){
    for (int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    //-------Initialization in STACK MEMORY
    int n = 3;
    // cin >> n;
    int arr_1[n];
    // ArrIn(&arr_1[0],n);
    // ArrOut(&arr_1[0],n);
    
    int arr_2[] = {1,2,3,4,5};
    
    int arr_3[5] = {1,2,3};
    cout << arr_3[3] << endl;
    //if we try to print a non initialised index, we get 0 by default
    
    //------Initialization in HEAP MEMORY
    // int n = 4;
    int* arr_4 = new int[n];
    
    //Printing Array in Reverse
    n = sizeof(arr_2)/sizeof(arr_2[0]);
    ArrOutRev(arr_2,n);
    
    //Doubling every value
    for(int i:arr_2){
        cout << i*2 << " ";
    }
    
    

    return 0;
}